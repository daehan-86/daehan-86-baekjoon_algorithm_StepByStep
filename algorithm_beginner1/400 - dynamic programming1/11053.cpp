#include<iostream>
using namespace std;
int dp[1001];
int a[1001];
int main(void){
	int n,result=0;
	cin>>n;
	for(int i=0;i<n;i++){
		scanf("%d",a+i);
		for(int j=0;j<i;j++){
			if(a[j]<a[i]&&dp[j]>=dp[i]){
				dp[i]=dp[j]+1;
				result=max(result,dp[i]);
			}
		}
	}
	cout<<result+1;
	return 0;
}