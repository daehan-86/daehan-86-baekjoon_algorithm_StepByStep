#include<iostream>
using namespace std;
int cnt(int n,int k){
	int ret=0;
	for(long long i=k;n/i>=1;i*=k){
		ret+=n/i;
	}
	return ret;
}
int main(void){
	int n;
	cin>>n;
	cout<<min(cnt(n,2),cnt(n,5));
	return 0;
}