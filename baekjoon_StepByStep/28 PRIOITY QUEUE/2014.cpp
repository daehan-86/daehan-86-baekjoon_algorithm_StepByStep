#include<iostream>
#include<queue>
#include<vector>
using namespace std;
typedef long long ll;
priority_queue<int,vector<int>,greater<int>>q;
int n,k,c,t;
int main(void){
	cin.tie(0);
	ios::sync_with_stdio(0);
	cin>>n>>k;
	vector<ll>v(n);
	for(int i=0;i<n;i++)cin>>v[i];
	q.push(1);
	while(c!=k){
		t=q.top();
		c++;
		q.pop();
		for(int i=0;i<n;i++){
			if((ll)t*v[i]>=INT32_MAX) break;
			q.push(t*v[i]);
			if(t%v[i]==0) break;
		}
	}
	cout<<q.top();
	return 0;
}