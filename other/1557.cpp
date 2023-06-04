#include<iostream>
using namespace std;
typedef long long ll;
int main(void){
	ll s,e,k,c;
	s=1ll;
	cin>>k;
	e=2*k;
	while(s<=e){
		c=(s+e)/2;
		if(k<f(c)) s=c+1;
		else e=c-1;
	}
	cout<<s;
	return 0;
}