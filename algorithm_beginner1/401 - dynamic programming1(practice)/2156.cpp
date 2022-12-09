#include<iostream>
using namespace std;
#define MAX(A,B,C) max(A,max(B,C));
int dp[10001][3];
int main(void){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		scanf("%d",dp[i]);
		dp[i][1]=dp[i][0];
		dp[i][0]+=dp[i-1][2];
		dp[i][1]+=dp[i-1][0];
		dp[i][2]+=MAX(dp[i-1][0],dp[i-1][1],dp[i-1][2]);
	}
	cout<<MAX(dp[n][0],dp[n][1],dp[n][2]);
	return 0;
}