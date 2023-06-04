#include<iostream>
using namespace std;
#define INF 1000000000
int cache[1000001];
int dp(int n){
	int &ret=cache[n];
	if(n==1||ret)return ret;
	ret=INF;
	if(n%3==0)ret=min(ret,dp(n/3)+1);
	if(n%2==0)ret=min(ret,dp(n/2)+1);
	ret=min(ret,dp(n-1)+1);
	return ret;
}
int main(void){
	int n;
	scanf("%d",&n);
	cout<<dp(n);
	return 0;
}