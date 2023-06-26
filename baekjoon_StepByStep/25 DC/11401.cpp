#include<iostream>
#define c 1000000007
using namespace std;
typedef long long ll;
ll a=1,b=1,n,k;
ll dc(int n){
	if(n==1) return b;
	ll t=dc(n/2);
	t=t*t%c;
	if(n%2) return t*b%c;
	else return t;
}
int main(void){
	cin.tie(0);
	ios::sync_with_stdio(0);
	cin>>n>>k;
	for(int i=0;i<k;i++) a=a*(n-i)%c;
	for(int i=1;i<=k;i++) b=b*i%c;
	cout<<(a*dc(c-2))%c;
	return 0;
}