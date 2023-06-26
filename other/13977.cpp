#include<iostream>
#define c 1000000007
using namespace std;
typedef long long ll;
ll n,k,m,p[4000001]={1,},a,b;
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
	cin>>m;
	for(int i=1;i<4000001;i++)p[i]=p[i-1]*i%c;
	while(m--){
		cin>>a>>b;
		b=p[a-b]*p[b]%c;
		cout<<p[a]*dc(c-2)%c<<"\n";
	}
	return 0;
}