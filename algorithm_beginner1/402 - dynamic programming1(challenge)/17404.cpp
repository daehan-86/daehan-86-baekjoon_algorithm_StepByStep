#include<iostream>
using namespace std;
int dp[1001][3][3];
int main(void){
	int n,rgb[3],result=1000000000;
	cin>>n;
	fill(*dp[0],*dp[1001],1000000000);
	for(int i=1;i<=n;i++){
		scanf("%d %d %d",rgb,rgb+1,rgb+2);
		if(i==1){
			for(int j=0;j<3;j++)
				dp[i][j][j]=rgb[j];
		}
		else{
			for(int j=0;j<3;j++){
				for(int k=0;k<3;k++){
					for(int l=0;l<3;l++)
						if(k!=l) dp[i][j][l]=min(dp[i][j][l],dp[i-1][j][k]+rgb[l]);
				}
			}
		}
	}
	for(int i=0;i<3;i++)
		for(int j=0;j<3;j++)
			if(i!=j)
				result=min(result,dp[n][i][j]);
	cout<<result;
	return 0;
}