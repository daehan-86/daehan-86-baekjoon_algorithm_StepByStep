#include<iostream>
using namespace std;
bool prime[1000001]={1,1};
int main(void){
	for(int i=2;i<=1000000;i++){
		if(!prime[i]){
			for(int j=2;j*i<=1000000;j++){
				prime[i*j]=1;
			}
		}
	}
	int n;
	while(1){
		scanf("%d",&n);
		bool state=1;
		if(!n) break;
		for(int i=n-1;i>=n/2;i-=2){
			if(!prime[i]&&!prime[n-i]){
				printf("%d = %d + %d\n",n,n-i,i);
				state=0;
				break;
			}
		}
		if(state) printf("Goldbach's conjecture is wrong.\n");
	}
	return 0;
}