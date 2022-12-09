#include<iostream>
using namespace std;
int dp[1001];
int res[1001];
int main(void){
	int n,t,result=0;
	cin>>n;
	for(int i=0;i<n;i++){
		scanf("%d",&dp[i]);
		for(int j=0;j<i;j++){
			if(dp[j]<dp[i]){
				res[i]=max(res[i],res[j]);
			}
		}
		res[i]+=dp[i];
		result = max(result,res[i]);
	}
	cout<<result;
	return 0;
}