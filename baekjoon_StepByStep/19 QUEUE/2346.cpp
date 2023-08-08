#include<iostream>
#include<deque>
using namespace std;
deque<pair<int,int>>dq;
void r(){
	dq.push_back(dq.front());
	dq.pop_front();
}
void l(){
	dq.push_front(dq.back());
	dq.pop_back();
}
int main(void){
	cin.tie(0);
	ios::sync_with_stdio(0);
	int n,t,k=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>t;
		dq.push_back({i,t});
	}
	while(!dq.empty()){
		if(k>0) while(1<k--) r();
		else while(k++) l();
		k=dq.front().second;
		cout<<dq.front().first<<" ";
		dq.pop_front();
	}
	return 0;
}