#include<iostream>
#include<queue>
using namespace std;
priority_queue<int>l;
priority_queue<int,vector<int>,greater<int>>r;
int main(void){
	cin.tie(0);
	ios::sync_with_stdio(0);
	int n,t,m=0;
	cin>>n;
	while(n--){
		cin>>t;
		if(l.empty())l.push(t);
		else{
			m=l.top();
			if(t>m) r.push(t);
			else l.push(t);
			if(l.size()<r.size()){
				l.push(r.top());
				r.pop();
			}
			else if(l.size()>r.size()+1){
				r.push(l.top());
				l.pop();
			}
		}
		cout<<l.top()<<"\n";
	}
	return 0;
}