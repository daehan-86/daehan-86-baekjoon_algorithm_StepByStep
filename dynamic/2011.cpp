#include<iostream>
#include<string>
#define INF 1000000
using namespace std;
string s;
int dp[5001];
int main(void){
	cin>>s;
	dp[0]=1;
	for(int i=0;i<s.length();i++){
		dp[i]%=INF;
		if(s[i]>'0'&&s[i]<='9')dp[i+1]+=dp[i];
		if(i<s.length()-1){
			int t=(s[i]-'0')*10+s[i+1]-'0';
			if(9<t&&t<27)dp[i+2]+=dp[i];
		}
	}
	cout<<dp[s.length()]%INF<<"\n";
	return 0;
}