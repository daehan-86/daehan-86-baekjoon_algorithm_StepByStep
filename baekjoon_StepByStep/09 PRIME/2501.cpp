#include<iostream>
using namespace std;

int main(void){
	int n,k;
	scanf("%d %d",&n,&k);
	for(int i=1;i<=n;i++){
		if(n%i==0) k--;
		if(!k){printf("%d",i);return 0;}
	}
	printf("0");
	return 0;
}