#include<iostream>
#include<queue>
using namespace std;
typedef long long ll;
priority_queue<ll>q;
ll res[1000001];
int main(void){
	cin.tie(0);
	ios::sync_with_stdio(0);
	ll n,t;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>t;
		t-=i;
		q.push(t);
		q.pop();
		q.push(t);
		res[i]=q.top();
	}
	for(int i=n-2;i>=0;i--){
		if(res[i+1]<res[i])res[i]=res[i+1];
	}
	for(int i=0;i<n;i++) cout<<res[i]+i<<"\n";
	return 0;
}