#include<iostream>
using namespace std;
int f[41],n;
int main(void){
	f[1]=f[2]=1;
	scanf("%d",&n);
	for(int i=3;i<=n;i++)
		f[i]=f[i-1]+f[i-2];
	printf("%d %d",f[n],n-2);
	return 0;
}