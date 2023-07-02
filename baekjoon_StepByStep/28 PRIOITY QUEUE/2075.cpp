#include<iostream>
#include<queue>
using namespace std;
priority_queue<int,vector<int>,greater<int>>q;
int main(void){
	cin.tie(0);
	ios::sync_with_stdio(0);
	int n,t;
	cin>>n;
	for(int i=0;i<n*n;i++){
		cin>>t;
		q.push(t);
		if(q.size()>n) q.pop();
	}
	cout<<q.top();
	return 0;
}