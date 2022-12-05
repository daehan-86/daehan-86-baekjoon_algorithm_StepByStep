#include<iostream>
using namespace std;
int dp[1001];
int main(void){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		scanf("%d",&dp[i]);
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			if(i+j<=n){
				dp[i+j]=max(dp[i+j],dp[i]+dp[j]);
			}
		}
	}
	cout<<dp[n];
	return 0;
}