#include<iostream>
using namespace std;
int dp[1001][31],n,w,t,res;
bool a[1001];
int main(void){
	cin.tie(0);
	ios::sync_with_stdio(0);
	cin>>n>>w;
	for(int i=0;i<n;i++){
		cin>>t;
		a[i]=(t==2);
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<=w;j++){
			if(j<w) dp[i+1][j+1]=max(dp[i+1][j+1],dp[i][j]+(j%2!=a[i]));
			dp[i+1][j]=max(dp[i+1][j],dp[i][j]+(j%2==a[i]));
			res=max(res,dp[i+1][j]);
		}
	}
	cout<<res;
	return 0;
}