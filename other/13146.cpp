#include<iostream>
#include<stack>
using namespace std;
stack<long long>s;
int main(void){
	long long n,k,mi,x,c=0;
	cin>>n;
	while(n--){
		scanf("%lld",&k);
		mi=k;
		while(!s.empty()){
			x=s.top();
			if(x>k) break;
			s.pop();
			mi=min(mi,x);
		}
		c+=k-mi;
		s.push(k);
	}
	x=s.top();
	s.pop();
	while(!s.empty()){
		k=x;
		x=s.top();
		s.pop();
		c+=x-k;
	}
	cout<<c;
	return 0;
}