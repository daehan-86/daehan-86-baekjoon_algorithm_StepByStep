#include<iostream>
#include<vector>
using namespace std;
typedef long long ll;
bool prime[4000001];
vector<ll>v;
ll n,s,e,res;
int main(void){
	cin>>n;
	fill(prime,prime+4000001,1);
	prime[0]=0;prime[1]=0;
	v.push_back(0);
	for(int i=0;i<4000001;i++){
		if(prime[i]){
			v.push_back(i+v[v.size()-1]);
			for(int j=2;i*j<4000001;j++) prime[i*j]=0;
		}
	}
	s=0;e=1;
	while(s<e&&v[e]-v[e-1]<=n&&e<v.size()){
		ll t=v[e]-v[s];
		if(t>n) s++;
		else if(t<n) e++;
		else{
			res++;
			e++;
		}
	}
	cout<<res;
	return 0;
}