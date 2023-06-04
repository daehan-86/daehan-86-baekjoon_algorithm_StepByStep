#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
string dp[251];
string sums(string a,string b){
	if(a.length()<b.length()) swap(a,b);
	int t=0,k;
	string *res=new string();
	for(int i=0;i<a.length();i++){
		k=a[i]+(i<b.length()?b[i]-'0':0)+t-'0';
		t=k/10;
		k%=10;
		res->push_back(k+'0');
	}
	while(t){
		res->push_back(t%10+'0');
		t/=10;
	}
	return *res;
}
int main(void){
	int n;
	while(scanf("%d",&n)!=EOF){
		dp[0]="1";
		dp[1]="1";
		for(int i=2;i<=n;i++){
			if(dp[i]=="")
				dp[i]=sums(dp[i-1],sums(dp[i-2],dp[i-2]));
		}
		for(int i=dp[n].length()-1;i>=0;i--)cout<<dp[n][i];
		cout<<"\n";
	}
	return 0;
}