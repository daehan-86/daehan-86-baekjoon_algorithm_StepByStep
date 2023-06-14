#include<iostream>
using namespace std;
long long dp(int n){
	if(n==1||!n)return 1;
	return n*dp(n-1);
}
int main(void){
	int n;
	cin>>n;
	cout<<dp(n);
	return 0;
}