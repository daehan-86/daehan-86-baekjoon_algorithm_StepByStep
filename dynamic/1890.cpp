// top-bottom 방식(내 풀이)
// #include<iostream>
// using namespace std;
// typedef long long ll;
// ll n,map[101][101],cache[101][101];
// ll dp(ll x,ll y){
// 	ll &ret=cache[x][y];
// 	if(ret!=-1ll)return ret;
// 	ll &t=map[x][y];
// 	if(!t) return ret=0;
// 	return ret=(x+t<n?dp(x+t,y):0)+(y+t<n?dp(x,y+t):0);
// }
// int main(void){
// 	scanf("%lld",&n);
// 	fill(cache[0],cache[101],-1ll);
// 	cache[n-1][n-1]=1ll;
// 	for(ll i=0;i<n;i++){
// 		for(ll j=0;j<n;j++){
// 			scanf("%lld",map[i]+j);
// 		}
// 	}
// 	cout<<dp(0,0);
// 	return 0;
// }

// bottom-top 방식(일반적 풀이)
#include<iostream>
using namespace std;
typedef long long ll;
ll n,map[101][101],dp[101][101];
int main(void){
	scanf("%lld",&n);
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			scanf("%lld",map[i]+j);
		}
	}
	dp[0][0]=1;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			ll &t=map[i][j];
			if(t&&i+t<n)dp[i+t][j]+=dp[i][j];
			if(t&&j+t<n)dp[i][j+t]+=dp[i][j];
		}
	}
	cout<<dp[n-1][n-1];
	return 0;
}