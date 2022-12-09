#include<iostream>
using namespace std;
int dp[501][501];
int main(void){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=i;j++)
			scanf("%d",&dp[i][j]);
	for(int i=n;i>1;i--){
		for(int j=1;j<n;j++){
			dp[i-1][j]+=max(dp[i][j],dp[i][j+1]);
		}
	}
	cout<<dp[1][1];
	return 0;
}