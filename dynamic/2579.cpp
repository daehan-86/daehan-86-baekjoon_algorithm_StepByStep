//Top-Bottom 방식(내 풀이)
// #include<iostream>
// using namespace std;
// int cache[301][3],v[301],n;
// int dp(int p,int seq){
// 	int &ret=cache[p][seq];
// 	if(p==n) ret=v[n];
// 	if(ret!=-1)return ret;
// 	ret=0;
// 	if(seq<2)ret=max(ret,v[p]+dp(p+1,seq+1));
// 	if(p<n-1)ret=max(ret,v[p]+dp(p+2,1));
// 	return ret;
// }
// int main(void){
// 	scanf("%d",&n);
// 	for(int i=1;i<=n;i++) scanf("%d",v+i);
// 	fill(cache[0],cache[301],-1);
// 	cout<<dp(0,0);
// 	return 0;
// }

//Bottom-Top 방식(일반적 풀이)
// #include<iostream>
// using namespace std;
// int v[301],n,dp[301];
// int main(void){
// 	scanf("%d",&n);
// 	for(int i=1;i<=n;i++)scanf("%d",v+i);
// 	for(int i=1;i<=n;i++){
// 		dp[i]=max(v[i-1]+v[i]+(i>2?dp[i-3]:0),v[i]+(i>1?dp[i-2]:0));
// 	}
// 	cout<<dp[n];
// 	return 0;
// }

// 최적화
#include<iostream>
using namespace std;
int v[301],n,dp[301];
int main(void){
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d",v+i);
		dp[i]=max(v[i-1]+v[i]+(i>2?dp[i-3]:0),v[i]+(i>1?dp[i-2]:0));
	}
	cout<<dp[n];
	return 0;
}