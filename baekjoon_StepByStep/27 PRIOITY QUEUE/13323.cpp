#include<iostream>
#include<queue>
using namespace std;
typedef long long ll;
priority_queue<ll>q;
int main(void){
	cin.tie(0);
	ios::sync_with_stdio(0);
	ll n,t,c=0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>t;
		t-=i;
		q.push(t);
		if(!q.empty()&&q.top()>t){
			c+=q.top()-t;
			q.pop();
			q.push(t);
		}
	}
	cout<<c;
	return 0;
}