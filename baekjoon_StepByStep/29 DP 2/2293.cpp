#include<iostream>
using namespace std;
int dp[10001];
int main(void){
	cin.tie(0);
	ios::sync_with_stdio(0);
	int n,k,t;
	cin>>n>>k;
	dp[0]=1;
	while(n--){
		cin>>t;
		for(int i=t;i<=k;i++) dp[i]+=dp[i-t];
	}
	cout<<dp[k];
	return 0;
}