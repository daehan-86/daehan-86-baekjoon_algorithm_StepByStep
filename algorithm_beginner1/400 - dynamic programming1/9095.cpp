#include<iostream>
using namespace std;
int dp[20]={0,1,1,1};
int main(void){
	for(int i=1;i<12;i++){
		dp[i+1]+=dp[i];
		dp[i+2]+=dp[i];
		dp[i+3]+=dp[i];
	}
	int t,n;
	cin>>t;
	while(t--){
		scanf("%d",&n);
		printf("%d\n",dp[n]);
	}
	return 0;
}