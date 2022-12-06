#include<iostream>
using namespace std;
int dp[4][100002];
int main(void){
	dp[1][1]=1;
	dp[2][2]=1;
	dp[3][3]=1;
	for(int i=1;i<=100000;i++){
		for(int j=1;j<4;j++){
			for(int k=1;k<4;k++){
				if(j!=k&&i+k<=100000){
					dp[k][i+k]+=dp[j][i];
					dp[k][i+k]%=1000000009;
				}
			}
		}
	}
	int t,k;
	cin>>t;
	while(t--){
		scanf("%d",&k);
		int result =0;
		for(int i=1;i<4;i++){
			result += dp[i][k];
			result %=1000000009;
		}
		printf("%d\n",result);
	}
	return 0;
}