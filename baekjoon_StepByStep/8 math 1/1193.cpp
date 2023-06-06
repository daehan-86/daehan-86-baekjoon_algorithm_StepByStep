#include<iostream>
using namespace std;

int main(void){
	int n,i;
	cin>>n;
	for(i=1;i<5000;i++)
		if(2*n-(i*i+i)<=0)break;
	i--;
	int a=n-(i*i+i)/2;
	int b=i+2-a;
	if((i+1)%2)
		printf("%d/%d",b,a);
	else
		printf("%d/%d",a,b);
	return 0;
}