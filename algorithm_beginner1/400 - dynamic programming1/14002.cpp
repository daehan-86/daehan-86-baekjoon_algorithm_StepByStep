#include<iostream>
using namespace std;
int dp[1001];
int a[1001];
int pre[1001];
int res[1001];
int main(void){
	int n,result=0,last=0;
	cin>>n;
	for(int i=0;i<n;i++){
		scanf("%d",a+i);
		for(int j=0;j<i;j++){
			if(a[j]<a[i]&&dp[j]>=dp[i]){
				dp[i]=dp[j]+1;
				pre[i]=j;
				if(result<dp[i]){
					result =dp[i];
					last=i;
				}
			}
		}
	}
	printf("%d\n",result+1);
	int k=result+1;
	while(k--){
		res[k]=a[last];
		last=pre[last];
	}
	for(int i=0;i<=result;i++) printf("%d ",res[i]);
	return 0;
}