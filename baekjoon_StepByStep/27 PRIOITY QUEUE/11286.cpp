#include<iostream>
#include<queue>
using namespace std;
priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>q;
int main(void){
	cin.tie(0);
	ios::sync_with_stdio(0);
	int n,t;
	cin>>n;
	while(n--){
		cin>>t;
		if(t){q.push({t<0?-t:t,t});continue;}
		if(q.empty()) cout<<"0\n";
		else{
			cout<<q.top().second<<"\n";
			q.pop();
		}
	}
	return 0;
}