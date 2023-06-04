#include<iostream>
using namespace std;
int cache[12];
int dp(int n){
	int &ret=cache[n];
	if(ret)return ret;
	for(int i=1;i<4;i++)
		ret+=dp(n-i);
	return ret;
}
int main(void){
	int t,n;
	scanf("%d",&t);
	cache[1]=1;
	cache[2]=2;
	cache[3]=4;
	while(t--){
		scanf("%d",&n);
		cout<<dp(n)<<"\n";
	}
	return 0;
}