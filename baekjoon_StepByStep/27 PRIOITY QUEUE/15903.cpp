#include<iostream>
#include<queue>
using namespace std;
typedef long long ll;
priority_queue<ll,vector<ll>,greater<ll>>q;
int main(void){
	cin.tie(0);
	ios::sync_with_stdio(0);
	ll n,m,k;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>k;
		q.push(k);
	}
	while(m--){
		k=q.top();q.pop();
		k+=q.top();q.pop();
		q.push(k);q.push(k);
	}
	k=0;
	while(!q.empty()){k+=q.top();q.pop();}
	cout<<k;
	return 0;
}