#include<iostream>
using namespace std;
int dp[100001];
int main(void){
	int n;
	cin>>n;
	for(int i=1;i*i<=n;i++) dp[i*i]=1;
	for(int i=1;i<=n;i++){
		for(int j=1;j*j<=n;j++){
			if(i+j*j<=n){
				if(!dp[i+j*j]) dp[i+j*j]=dp[i]+1;
				else dp[i+j*j]=min(dp[i]+1,dp[i+j*j]);
			}
		}
	}
	cout<<dp[n];
	return 0;
}