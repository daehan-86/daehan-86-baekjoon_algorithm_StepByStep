#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int n,c;
vector<int>v;
bool able(int &m){
	int s=v[0],e=v.back(),t=c-2;
	while(t--){
		auto k = lower_bound(v.begin(),v.end(),s+m);
		if(v.end()==k) return 0;
		s=*k;
	}
	return (e-s)>=m;
}
int main(void){
	cin.tie(0);
	ios::sync_with_stdio(0);
	cin>>n>>c;
	v=vector<int>(n);
	for(int i=0;i<n;i++) cin>>v[i];
	sort(v.begin(),v.end());
	int l=1,h=v.back()-v.front(),m;
	while(l<h){
		m=(l+h+1)/2;
		if(able(m)) l=m;
		else h=m-1;
	}
	cout<<l;
	return 0;
}