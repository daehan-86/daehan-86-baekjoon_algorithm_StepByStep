#include<iostream>
using namespace std;
int dp[1001],res[1001],a[1001],c,s=1,n;
int main(void){
	cin.tie(0);
	ios::sync_with_stdio(0);
	cin>>n;
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int i=n;i>0;i--){
		for(int j=n;j>i;j--){
			if(a[j]>a[i]&&dp[i]<=dp[j]){
				dp[i]=dp[j]+1;
				res[i]=j;
				if(c<dp[i]){
					c=dp[i];
					s=i;
				}
			}
		}
	}
	cout<<c+1<<"\n";
	while(s){
		cout<<a[s]<<" ";
		s=res[s];
	}
	return 0;
}