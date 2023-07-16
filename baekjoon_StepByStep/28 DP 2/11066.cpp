#include<iostream>
#define INF 1<<31-1
using namespace std;
int cache[501][501],c,sum[501];
int dp(int s,int e){
	int &ret=cache[s][e];
	if(ret!=INF) return ret;
	if(s==e) return ret=0;
	if(s+1==e) return ret=sum[e]-sum[s-1];
	for(int i=s;i<e;i++){
		int a=dp(s,i),b=dp(i+1,e);
		ret=min(ret,a+b);
	}
	return ret+=sum[e]-sum[s-1];
}
int main(void){
	cin.tie(0);
	ios::sync_with_stdio(0);
	int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		c=0;
		for(int i=1;i<=n;i++){
			cin>>sum[i];
			sum[i]+=sum[i-1];
		}
		fill(cache[0],cache[501],INF);
		cout<<dp(1,n)<<"\n";
	}
	return 0;
}