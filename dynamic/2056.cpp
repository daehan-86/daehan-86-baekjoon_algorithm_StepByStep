#include<iostream>
#include<string>
#include<cmath>
using namespace std;
typedef long long ll;
ll s[51][101],n,k;
string res;
ll dp(ll d,ll t,ll a,bool state){
	if(!d)return t;
	d--;
	ll p=pow(2,d),w=s[d][n-(a+1)];
	if(a<0)state=1;
	if(state)w=0;
	if(p-w>t){
		res.push_back('(');
		return dp(d,t,a+1,state);
	}
	else{
		t-=p-w;
		res.push_back(')');
		return dp(d,t,a-1,state);
	}
}
int main(void){
	cin>>n>>k;
	s[0][n]=1;
	for(int i=0;i<n;i++){
		for(int j=0;j<101;j++){
			if(j>0)s[i+1][j-1]+=s[i][j];
			if(j<101&&j!=n-1)s[i+1][j+1]+=s[i][j];
		}
	}
	if(dp(n,k,0,0))cout<<"-1";
	else cout<<res;
	return 0;
}