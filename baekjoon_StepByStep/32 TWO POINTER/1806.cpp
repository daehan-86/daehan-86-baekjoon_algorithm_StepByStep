#include<iostream>
#define INF 9223372036854775807
using namespace std;
typedef long long ll;
ll n,t,v[100001],res=INF,s,a,e;
int main(void){
	cin.tie(0);
	ios::sync_with_stdio(0);
	cin>>n>>t;
	for(int i=1;i<=n;i++){
		cin>>a;
		v[i]=v[i-1]+a;
	}
	s=0;e=1;
	while(s<=e&&e<=n){
		ll k=v[e]-v[s];
		if(k>=t){
			res=min(e-s,res);
			s++;
		}
		else e++;
	}
	cout<<(res==INF?0:res);
	return 0;
}