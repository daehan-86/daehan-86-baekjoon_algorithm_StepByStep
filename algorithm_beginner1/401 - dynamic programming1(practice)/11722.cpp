#include<iostream>
using namespace std;
int dp[1001],res[1001];
int main(void){
	int n,result=0;
	cin>>n;
	for(int i=0;i<n;i++){
		scanf("%d",dp+i);
		for(int j=0;j<i;j++){
			if(dp[j]>dp[i]){
				res[i]=max(res[i],res[j]+1);
			}
		}
		result=max(result,res[i]);
	}
	cout<<result + 1;
	return 0;
}