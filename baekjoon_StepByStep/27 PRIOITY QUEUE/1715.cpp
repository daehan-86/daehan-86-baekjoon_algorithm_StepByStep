#include<iostream>
#include<queue>
using namespace std;
priority_queue<int,vector<int>,greater<int>>q;
int main(void){
	cin.tie(0);
	ios::sync_with_stdio(0);
	int n,k,a,b,c=0;
	cin>>n;
	while(n--){cin>>k;q.push(k);}
	while(q.size()>1){
		a=q.top();q.pop();
		b=q.top();q.pop();
		q.push(a+b);
		c+=a+b;
	}
	cout<<c;
	return 0;
}