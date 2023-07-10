#include<iostream>
#include<set>
#define INF 1000000000
using namespace std;
int dp[10001];
set<int>s;
int main(void){
	cin.tie(0);
	ios::sync_with_stdio(0);
	fill(dp,dp+10001,INF);
	int n,k,t;
	cin>>n>>k;
	while(n--){
		cin>>t;
		if(t<=k&&s.find(t)==s.end()){
			s.insert(t);
			dp[t]=1;
			for(int i=1;i<=k-t;i++){
				if(dp[i]!=INF){
					dp[i+t]=min(dp[i+t],dp[i]+1);
				}
			}
		}
	}
	cout<<(dp[k]==INF?-1:dp[k]);
	return 0;
}