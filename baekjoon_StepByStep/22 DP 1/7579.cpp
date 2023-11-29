#include<iostream>
#define INF 2147483647
using namespace std;

int memo[101],cost[101],n,m,res=INF,dp[101][10001];

int main(void){
	cin.tie(0);
	ios::sync_with_stdio(0);
	cin>>n>>m;
	for(int i=0;i<n;i++) cin>>memo[i];
	for(int i=0;i<n;i++) cin>>cost[i];
	for(int i=0;i<n;i++){
		int &a=memo[i],&b=cost[i];
		for(int j=0;j<10001;j++){
			if(dp[i][j]){
				dp[i+1][j+b]=max(dp[i][j]+a,dp[i][j+b]);
				dp[i+1][j]=max(dp[i+1][j],dp[i][j]);
			}
		}
		dp[i+1][b]=max(dp[i+1][b],a);
	}
	for(int i=0;i<10001;i++){
		if(dp[n][i]>=m){
			cout<<i;
			return 0;
		}
	}
	return 0;
}