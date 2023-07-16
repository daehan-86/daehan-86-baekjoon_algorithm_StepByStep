#include<iostream>
#include<queue>
#include<vector>
#include<algorithm>
using namespace std;
typedef long long ll;
typedef pair<ll,ll> p;
priority_queue<p>q;
ll n,a,b,c;
int main(void){
	cin.tie(0);
	ios::sync_with_stdio(0);
	cin>>n;
	vector<p>v;
	while(n--){
		cin>>a>>b;
		v.push_back({a+b,b});
	}
	sort(v.begin(),v.end());
	ll s=0;
	for(int i=0;i<v.size();i++){
		p t=v[i];
		swap(t.first,t.second);
		if(s+t.first<=t.second){
			q.push(t);
			s+=t.first;
			c++;
		}
		else{
			p k=q.top();
			if(k.first>t.first){
				q.pop();
				q.push(t);
				s-=k.first-t.first;
			}
		}
	}
	cout<<c;
	return 0;
}