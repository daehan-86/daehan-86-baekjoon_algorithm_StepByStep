#include<iostream>
using namespace std;

int main(void){
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	b+=c;
	a+=b/60;
	b%=60;
	a%=24;
	printf("%d %d",a,b);
	return 0;
}