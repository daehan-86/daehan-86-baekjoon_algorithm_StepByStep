#include<iostream>
#include<stack>
#include<tuple>
using namespace std;
typedef long long ll;
ll n,t,res;
stack<pair<ll,ll>>s;
int main(void){
	cin.tie(0);
	ios::sync_with_stdio(0);
	cin>>n;
	for(ll i=0;i<n;i++){
		cin>>t;
		int k=0;
		while(!s.empty()&&s.top().second>=t){
			k+=s.top().first+1;
			res=max(res,k*s.top().second);
			s.pop();
		}
		s.push({k,t});
	}
	int k=0;
	while(!s.empty()){
		k+=s.top().first+1;
		res=max(res,k*s.top().second);
		s.pop();
	}
	cout<<res;
	return 0;
}