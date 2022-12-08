#include<iostream>
using namespace std;
int dp[1000001]={0,1,1,1};
int main(void){
	for(int i=1;i<1000001;i++){
		for(int j=1;j<4;j++){
			dp[i+j]+=dp[i];
			dp[i+j]%=1000000009;
		}
	}
	int t,n;
	cin>>t;
	while(t--){
		scanf("%d",&n);
		printf("%d\n",dp[n]);
	}
	return 0;
}