#include<iostream>
#include<queue>
using namespace std;
priority_queue<int>q;
int n,k,c,t;
int main(void){
	cin.tie(0);
	ios::sync_with_stdio(0);
	cin>>n>>k;
	for(int i=1;i<n;i++){cin>>t;q.push(t);}
	while(!q.empty()&&q.top()>=k){
		t=q.top();
		q.pop();
		q.push(t-1);
		k++;
		c++;
	}
	cout<<c;
	return 0;
}