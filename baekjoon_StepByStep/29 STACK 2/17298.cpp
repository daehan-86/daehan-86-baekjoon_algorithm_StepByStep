#include<iostream>
#include<stack>
using namespace std;
int n,res[1000001],t;
stack<pair<int,int>>s;
int main(void){
	cin.tie(0);
	ios::sync_with_stdio(0);
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>t;
		while(!s.empty()&&s.top().first<t){
			res[s.top().second]=t;
			s.pop();
		}
		s.push({t,i});
	}
	for(int i=0;i<n;i++){
		if(res[i])cout<<res[i]<<" ";
		else cout<<"-1 ";
	}
	return 0;
}