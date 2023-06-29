#include<iostream>
#include<queue>
using namespace std;
typedef pair<int,int> p;
priority_queue<p,vector<p>,greater<p>>q;
int main(void){
	cin.tie(0);
	ios::sync_with_stdio(0);
	int n,l,t,x,y;
	cin>>n>>l;
	for(int i=0;i<n;i++){
		cin>>t;
		q.push({t,i});
		while(i>=l&&q.top().second<=i-l)q.pop();
		cout<<q.top().first<<" ";
	}
	return 0;
}