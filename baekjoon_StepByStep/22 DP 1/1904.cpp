#include<iostream>
using namespace std;
int dp[1000001],n;
int main(void){
	dp[1]=1;dp[2]=2;
	scanf("%d",&n);
	for(int i=3;i<=n;i++)
		dp[i]=(dp[i-1]+dp[i-2])%15746;
	cout<<dp[n];
	return 0;
}