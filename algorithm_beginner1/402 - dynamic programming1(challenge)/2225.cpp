#include<iostream>
using namespace std;
int dp[201][201];
int main(void){
	int n,k;
	cin>>n>>k;
	fill(dp[1],dp[2],1);
	for(int i=1;i<k;i++){
		for(int j=0;j<=n;j++){
			for(int l=0;l<=n;l++){
				if(j+l<=n){
					dp[i+1][j+l]+=dp[i][j];
					dp[i+1][j+l]%=1000000000;
				}
			}
		}
	}
	cout<<dp[k][n];
	return 0;
}