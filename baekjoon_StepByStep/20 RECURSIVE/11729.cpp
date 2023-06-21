#include<iostream>
using namespace std;
void dp(int n,int a,int b){
	if(n==1){
		printf("%d %d\n",a,b);
		return;
	}
	dp(n-1,a,6-a-b);
	printf("%d %d\n",a,b);
	dp(n-1,6-a-b,b);
}
int main(void){
	int n,k=1;
	cin>>n;
	for(int i=1;i<n;i++){
		k*=2;
		k++;
	}
	printf("%d\n",k);
	dp(n,1,3);
	return 0;
}