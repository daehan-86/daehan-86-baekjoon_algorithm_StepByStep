#include<iostream>
using namespace std;
int dp[100001][3]={{0,0,0},{1,1,1}};
int main(void){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		dp[i][0]+=dp[i-1][1]+dp[i-1][2];
		dp[i][1]+=dp[i-1][0]+dp[i-1][2];
		dp[i][2]+=dp[i-1][0]+dp[i-1][1]+dp[i-1][2];
		dp[i][0]%=9901;
		dp[i][1]%=9901;
		dp[i][2]%=9901;
	}
	cout<<(dp[n][0]+dp[n][1]+dp[n][2])%9901;
	return 0;
}