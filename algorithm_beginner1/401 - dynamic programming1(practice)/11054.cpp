#include<iostream>
using namespace std;
int dp[1001],res[1001][2];
int main(void){
	int n,result=0;
	cin>>n;
	for(int i=0;i<n;i++)
		scanf("%d",dp+i);
	for(int i=0;i<n;i++){
		for(int j=0;j<i;j++){
			if(dp[j]<dp[i]){
				res[i][0]=max(res[i][0],res[j][0]+1);
			}
		}
		for(int j=n-1;j>=n-i;j--){
			if(dp[j]<dp[n-i-1]){
				res[n-i-1][1]=max(res[n-i-1][1],res[j][1]+1);
			}
		}
	}
	for(int i=0;i<n;i++) result = max(result,res[i][0]+res[i][1]+1);
	cout<<result;
	return 0;
}