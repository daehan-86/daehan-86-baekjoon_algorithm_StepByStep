#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
using namespace std;
typedef long long ll;
typedef pair<ll,ll> p;
priority_queue<ll>q;
ll n,c;
bool comp(p a,p b){
	return a.second<b.second;
}
int main(void){
	cin.tie(0);
	ios::sync_with_stdio(0);
	cin>>n;
	vector<p>v(n);
	for(int i=0;i<n;i++) cin>>v[i].first;
	for(int i=0;i<n;i++) cin>>v[i].second;
	sort(v.begin(),v.end(),comp);
	c=v[0].first;
	for(int i=1;i<n-1;i+=2){
		q.push(v[i].first);
		q.push(v[i+1].first);
		c+=q.top();
		q.pop();
	}
	cout<<c;
	return 0;
}