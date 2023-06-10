#include<iostream>
using namespace std;
typedef long long ll;
ll gcd(ll a,ll b){
	if(!b) return a;
	else return gcd(b,a%b);
}
int main(void){
	ll a,b,c,d,k;
	cin>>a>>b>>c>>d;
	k=b*d/gcd(b,d);
	ll x=a*k/b+c*k/d,y=k;
	k=gcd(x,y);
	printf("%lld %lld",x/k,y/k);
	return 0;
}