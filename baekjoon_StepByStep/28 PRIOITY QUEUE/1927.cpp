#include<iostream>
#include<queue>
using namespace std;
priority_queue<int,vector<int>,greater<int>>q;
int main(void){
	cin.tie(0);
	ios::sync_with_stdio(0);
	int n,t;
	cin>>n;
	while(n--){
		cin>>t;
		if(t){
			q.push(t);
			continue;
		}
		if(q.empty()) cout<<"0\n";
		else{cout<<q.top()<<"\n";q.pop();}
	}
	return 0;
}