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
	int n,m;
	cin>>n>>m;
	int t = cnt(n,2)-cnt(n-m,2)-cnt(m,2);
	int f = cnt(n,5)-cnt(n-m,5)-cnt(m,5);
	cout<<min(t,f);
	return 0;
}