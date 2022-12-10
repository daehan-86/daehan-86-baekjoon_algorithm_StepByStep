#include<iostream>
using namespace std;
#define MAX(A,B,C) max(A,max(B,C));
int dp[100001][2];
int main(void){
	int n,t,result=-1000000000;
	cin>>n;
	for(int i=1;i<=n;i++){
		scanf("%d",&t);
		if(dp[i-1][0]<0) dp[i][0]=t;
		else dp[i][0]+=t+dp[i-1][0];
		if(i>1) dp[i][1]=max(dp[i-1][1]+t,dp[i-2][0]+t);
		else dp[i][1]=t;
		result=MAX(result,dp[i][0],dp[i][1]);
	}
	cout<<result;
	return 0;
}