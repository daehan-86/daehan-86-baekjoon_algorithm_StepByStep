#include<iostream>
#include<queue>
#include<vector>
#include<algorithm>
using namespace std;
typedef pair<int,int> p;
priority_queue<p,vector<p>,greater<p>>q;
vector<p>v;
int n,a,b,c,d;
p t;
int main(void){
	cin.tie(0);
	ios::sync_with_stdio(0);
	cin>>n;
	while(n--){
		cin>>a>>b;
		v.push_back({a,b});
	}
	sort(v.begin(),v.end());
	for(p o:v){
		swap(o.first,o.second);
		if(d<o.second){
			q.push(o);
			d++;
			c+=o.first;
		}
		else{
			t=q.top();
			if(t.first<o.first){
				q.push(o);
				q.pop();
				c-=t.first-o.first;
			}
		}
	}
	cout<<c;
	return 0;
}