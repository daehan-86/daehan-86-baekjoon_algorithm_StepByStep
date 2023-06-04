#include<iostream>
using namespace std;
long long cache[91];
long long dp(int n){
	long long &ret=cache[n];
	if(!n||ret)return ret;
	return ret=dp(n-1)+dp(n-2);
}
int main(void){
	int n;
	scanf("%d",&n);
	cache[1]=1;
	cout<<dp(n);
	return 0;
}