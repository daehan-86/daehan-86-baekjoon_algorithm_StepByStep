#include<iostream>
using namespace std;
int dp[1001],n;
int main(void){
	scanf("%d",&n);
	dp[0]=dp[1]=1;
	for(int i=2;i<=n;i++) dp[i]=(dp[i-1]+dp[i-2])%10007;
	cout<<dp[n];
	return 0;
}