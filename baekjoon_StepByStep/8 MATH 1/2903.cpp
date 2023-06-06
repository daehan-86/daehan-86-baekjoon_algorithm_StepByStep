#include<iostream>
using namespace std;

int main(void){
	int n,k=2;
	scanf("%d",&n);
	for(int i=0;i<n;i++) k=2*k-1;
	printf("%d",k*k);
	return 0;
}