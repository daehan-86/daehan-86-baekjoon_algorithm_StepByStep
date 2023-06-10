#include<iostream>
using namespace std;
typedef long long ll;
ll gcd(ll a,ll b){
	if(!b) return a;
	else return gcd(b,a%b);
}
int main(void){
	ll a,b;
	cin>>a>>b;
	cout<<a*b/gcd(a,b);
	return 0;
}