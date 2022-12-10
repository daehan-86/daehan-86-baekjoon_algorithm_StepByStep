#include<iostream>
using namespace std;
int dp[35][7]={{0,0,0,0,0,0,1}};
int main(void){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=0;j<3;j++){
			dp[i][j]+=dp[i-1][j+3];
			dp[i][j+3]+=dp[i-1][j];
			if(j!=2){
				dp[i][j+3]+=dp[i-1][6];
				dp[i][6]+=dp[i][j];
			}
		}
		if(i>1) dp[i][6]+=dp[i-2][6];
	}
	cout<<dp[n][6];
	return 0;
}