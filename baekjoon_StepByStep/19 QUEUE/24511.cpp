#include<iostream>
#include<deque>
using namespace std;
bool a[100001];
int n,m,c;
deque<int>dq;
int main(void){
	cin.tie(0);
	ios::sync_with_stdio(0);
	cin>>n;
	for(int i=0;i<n;i++) cin>>a[i];
	for(int i=0;i<n;i++){
		cin>>c;
		if(!a[i]) dq.push_back(c);
	}
	cin>>m;
	while(m--){
		cin>>c;
		dq.push_front(c);
		cout<<dq.back()<<" ";
		dq.pop_back();
	}
	return 0;
}