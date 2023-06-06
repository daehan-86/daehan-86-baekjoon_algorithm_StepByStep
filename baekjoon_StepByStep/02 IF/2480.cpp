#include<iostream>
using namespace std;
#define MAX(A,B,C) max(A,max(B,C))
int main(void){
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	if(a==b&&b==c)printf("%d",10000+a*1000);
	else if(a==b||b==c)printf("%d",1000+b*100);
	else if(a==c)printf("%d",1000+a*100);
	else printf("%d",MAX(a,b,c)*100);
	return 0;
}