#include<iostream>
#include<vector>
using namespace std;
typedef long long ll;
int main(void){
	cin.tie(0);
	ios::sync_with_stdio(0);
	int k,n;
	cin>>k>>n;
	vector<int>v(k);
	for(int i=0;i<k;i++)cin>>v[i];
	ll l=1,h=(1LL<<31)-1,m;
	while(l<h){
		m=(l+h+1)/2;
		ll c=0;
		for(int o:v) c+=o/m;
		if(c>=n)l=m;
		else h=m-1;
	}
	cout<<l;
	return 0;
}