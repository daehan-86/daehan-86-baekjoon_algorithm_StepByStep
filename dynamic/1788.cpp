#include<iostream>
#include<cmath>
#define s 1000000
using namespace std;
int dp[2*s+1];
int main(void){
	int n;
	scanf("%d",&n);
	dp[s+1]=1;
	if(n<0){
		for(int i=s-1;i>=s+n;i--)
			dp[i]=(dp[i+2]-dp[i+1])%1000000000;
	}
	else if(n>1){
		for(int i=s+2;i<=s+n;i++)
			dp[i]=(dp[i-1]+dp[i-2])%1000000000;
	}
	if(dp[s+n]>0) cout<<"1\n";
	else if(dp[s+n]<0) cout<<"-1\n";
	else cout<<"0\n";
	cout<<abs(dp[s+n]);
	return 0;
}