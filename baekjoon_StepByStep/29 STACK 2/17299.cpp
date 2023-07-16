#include<iostream>
#include<stack>
using namespace std;
int n,res[1000001],a[1000001],c[1000001];
stack<pair<int,int>>s;
int main(void){
	cin.tie(0);
	ios::sync_with_stdio(0);
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
		c[a[i]]++;
	}
	for(int i=0;i<n;i++){
		while(!s.empty()&&c[s.top().first]<c[a[i]]){
			res[s.top().second]=a[i];
			s.pop();
		}
		s.push({a[i],i});
	}
	for(int i=0;i<n;i++){
		if(res[i]) cout<<res[i]<<" ";
		else cout<<"-1 ";
	}
	return 0;
}