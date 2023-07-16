#include<iostream>
#include<queue>
#include<vector>
#include<algorithm>
using namespace std;
typedef pair<int,int> p;
priority_queue<p,vector<p>,greater<p>>q;
int n,a,b;
int main(void){
	cin.tie(0);
	ios::sync_with_stdio(0);
	cin>>n;
	vector<p>v(n);
	for(int i=0;i<n;i++){
		cin>>a>>b;
		v[i]={a,b};
	}
	sort(v.begin(),v.end());
	for(int i=0;i<n;i++){
		a=v[i].first,b=v[i].second;
		if(!q.empty()&&q.top().first<=a){
			q.pop();
		}
		q.push({b,a});
	}
	cout<<q.size();
	return 0;
}