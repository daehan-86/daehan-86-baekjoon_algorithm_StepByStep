#include<iostream>
using namespace std;

int main(void){
	long long n,m,res;
	cin>>n>>m;
	res=(n/2)*(m/2)*2;
	if(n%2) res+=m/2;
	if(m%2) res+=n/2;
	cout<<res;
	return 0;
}