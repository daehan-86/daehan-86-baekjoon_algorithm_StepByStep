#include<iostream>
using namespace std;
int dp[100001][3];
int main(void){
	int t;
	cin>>t;
	while(t--){
		int n;
		scanf("%d",&n);
		fill(dp[0],dp[100001],0);
		for(int i=0;i<2;i++)
			for(int j=1;j<=n;j++)
				scanf("%d",&dp[j][i]);
		for(int i=1;i<=n;i++){
			dp[i][0]+=max(dp[i-1][1],dp[i-1][2]);
			dp[i][1]+=max(dp[i-1][0],dp[i-1][2]);
			dp[i][2]+=max(dp[i-1][0],max(dp[i-1][1],dp[i-1][2]));
		}
		printf("%d\n",max(dp[n][0],max(dp[n][1],dp[n][2])));
	}
	return 0;
}