#include<iostream>
#include<queue>
using namespace std;
typedef pair<int,int> p;
int n,x,a,b,c,t,d;
p k;
priority_queue<p,vector<p>,greater<p>>q;
int main(void){
	cin.tie(0);
	ios::sync_with_stdio(0);
	cin>>n;
	while(n--){
		cin>>a>>b;
		q.push({a,b});
	}
	cin>>x>>d;
	while(!q.empty()){
		if(x-t<=d) break;
		k=q.top();q.pop();
		t=k.first,d+=k.second;
		
		
	}
	return 0;
}