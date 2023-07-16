#include<iostream>
#include<stack>
using namespace std;
typedef long long ll;
ll n,res,t;
stack<pair<ll,ll>>s;
int main(void){
	cin.tie(0);
	ios::sync_with_stdio(0);
	cin>>n;
	while(n--){
		cin>>t;
		ll k=0;
		while(!s.empty()&&s.top().first<=t){
			k=s.top().second+1;
			res+=k;
			if(s.top().first!=t)k=0; 
			s.pop();
		}
		if(!s.empty())res++;
		s.push({t,k});
	}
	cout<<res;
	return 0;
}