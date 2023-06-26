#include<iostream>
using namespace std;
typedef long long ll;
ll a,b,c;
ll dc(ll n){
	if(n==1) return a%c;
	ll t=dc(n/2);
	t=t*t%c;
	if(n%2)return t*a%c;
	else return t%c;
}
int main(void){
	cin.tie(0);
	ios::sync_with_stdio(0);
	cin>>a>>b>>c;
	cout<<dc(b);
	return 0;
}