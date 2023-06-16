#include<iostream>
using namespace std;
void dp(int n,bool state){
	if(!n){cout<<(state?'-':' ');return;}
	if(state){
		dp(n-1,1);
		dp(n-1,0);
		dp(n-1,1);
	}
	else{
		dp(n-1,0);
		dp(n-1,0);
		dp(n-1,0);
	}
}
int main(void){
	int n;
	while(scanf("%d",&n)!=EOF){
		dp(n,1);
		cout<<"\n";
	}
	return 0;
}