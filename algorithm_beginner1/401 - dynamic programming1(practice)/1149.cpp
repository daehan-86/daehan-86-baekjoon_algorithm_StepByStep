#include<iostream>
using namespace std;
int dp[1001][3];
int main(void){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
		for(int j=0;j<3;j++)
			scanf("%d",&dp[i][j]);
	for(int i=1;i<n;i++){
		int &a=dp[i][0],&b=dp[i][1],&c=dp[i][2];
		dp[i+1][0]+=min(b,c);
		dp[i+1][1]+=min(a,c);
		dp[i+1][2]+=min(a,b);
	}
	printf("%d",min(dp[n][0],min(dp[n][1],dp[n][2])));
	return 0;
}