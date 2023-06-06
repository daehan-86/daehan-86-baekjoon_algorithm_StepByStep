#include<iostream>
using namespace std;
int main(void){
	int a,b,c,m,s;
	scanf("%d %d %d",&a,&b,&c);
	s=a+b+c;
	m=max(a,max(b,c));
	if(s>2*m) printf("%d",s);
	else printf("%d",2*(s-m)-1);
	return 0;
}