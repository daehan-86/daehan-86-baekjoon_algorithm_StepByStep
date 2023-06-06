#include<iostream>
using namespace std;

int main(void){
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	if(a+b+c==180){
		if(a==b&&b==c) printf("Equilateral");
		else if(a==b||b==c||a==c) printf("Isosceles");
		else printf("Scalene");
	}
	else printf("Error");
	return 0;
}