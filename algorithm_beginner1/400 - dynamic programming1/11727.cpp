#include<iostream>
using namespace std;
int dp[1002]={1,1};
int main(void){
	int n;
	cin>>n;
	for(int i=2;i<=n;i++){
		dp[i]=(dp[i-1]+2*dp[i-2])%10007;
	}
	cout<<dp[n];
}