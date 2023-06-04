#include<iostream>
#include<string>
#include<cmath>
using namespace std;
typedef long long ll;
ll cache[51][101];
bool state;
ll C(ll a,ll b){
	int t=f-e+(f<e?100:0);
	if(b>a/2)b=a-b;
	ll &ret=cache[a][b];
	if(!b) ret=1;
	if(ret==-1)
		ret=C(a-1,b-1)+C(a-1,b);
	return ret;
}
string dp(int f,int e,ll n,ll k){
	if(!n){
		if(k) state=1;
		return "";
	}
	int t=f-e+(f<e?100:0);
	if(k<=pow(2,n)-C(n,t)){
		return "("+dp(f+1,e,n-1,k);
	}
	return ")"+dp(f,e+1,n-1,k-(pow(2,n)-C(n,t)));
}
int main(void){
	ll n,k;
	fill(cache[0],cache[51],-1);
	scanf("%lld %lld",&n,&k);
	string s=dp(n,k);
	if(state)cout<<"-1";
	else cout<<s;
	return 0;
}