#include<iostream>
using namespace std;

int main(void){
	int a,b,c,d;
	scanf("%d %d %d %d",&a,&b,&c,&d);
	printf("%d",(c<a)?0:(c-a)*d>=b);
	return 0;
}