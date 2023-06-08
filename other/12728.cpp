#include<iostream>
#include<cmath>
using namespace std;
typedef long long ll;
typedef pair<ll,ll> pp;
pp div(ll n){
	if(n==1) return {3ll,1ll};
	pp k = div(n/2),ret;
	ll a,b;
	a=k.first*k.first+5*k.second*k.second;
	b=2*k.first*k.second;
	if(n%2)
		ret=make_pair((3*a+5*b)%1000,3*b+a);
	else
		ret=make_pair(a%1000,b);
	return ret;
}
int main(void){
	ll t,n;
	scanf("%lld",&t);
	for(int i=1;i<=t;i++){
		scanf("%lld",&n);
		pp res = div(n);
		printf("%lld %lld\n",res.first,res.second);
		printf("Case #%d: %03d",i,(int)(res.first+res.second*sqrt(5))%1000);
	}
	return 0;
}