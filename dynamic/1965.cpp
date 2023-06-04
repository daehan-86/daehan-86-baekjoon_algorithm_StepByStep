#include<iostream>
using namespace std;
int v[1001],dp[1001],res=0;
int main(void){
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",v+i);
		dp[i]=1;
		for(int j=0;j<i;j++){
			if(v[j]<v[i]) dp[i]=max(dp[i],dp[j]+1);
		}
		res=max(res,dp[i]);
	}
	cout<<res;
	return 0;
}