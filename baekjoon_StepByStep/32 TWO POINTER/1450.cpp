#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
typedef long long ll;
vector<ll> v1,v2;
ll n,c,res,a[31];
void C(int l,int r,vector<ll>&v,long long s){
	if(l>r) v.push_back(s);
	else{
		C(l+1,r,v,s);
		C(l+1,r,v,s+a[l]);
	}
}
int main(void){
	cin.tie(0);
	ios::sync_with_stdio(0);
	cin>>n>>c;
	for(int i=0;i<n;i++)cin>>a[i];
	C(0,n/2,v1,0);
	C(n/2+1,n-1,v2,0);
	sort(v2.begin(),v2.end());
	for(ll x:v1)
		res+=upper_bound(v2.begin(),v2.end(),c-x)-v2.begin();
	cout<<res;
	return 0;
}