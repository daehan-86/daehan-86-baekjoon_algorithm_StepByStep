#include<iostream>
using namespace std;
typedef long long ll;
ll n,k;
bool able(ll m){
	ll s=0;
	for(int i=1;i<=n;i++) s+=min(m/i,n);
	return s>=k;
}
int main(void){
	cin.tie(0);
	ios::sync_with_stdio(0);
	
	cin>>n>>k;
	k=min(1000000000LL,k);
	ll l=1,h=n*n,m;
	while(l<=h){
		m=(l+h)/2;
		if(able(m))h=m-1;
		else l=m+1;
	}
	cout<<l;
	return 0;
}