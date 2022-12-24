#include<iostream>
#include<string.h>
using namespace std;
int main(void){
	int n,k,b=0;
	char s[20];
	cin>>n;
	while(n--){
		scanf("%s",s);
		if(!strcmp(s,"add")){
			scanf("%d",&k);
			b|=(1<<k);
		}
		else if(!strcmp(s,"remove")){
			scanf("%d",&k);
			b&=~(1<<k);
		}
		else if(!strcmp(s,"check")){
			scanf("%d",&k);
			printf("%d\n",!!(b&(1<<k)));
		}
		else if(!strcmp(s,"toggle")){
			scanf("%d",&k);
			b^=1<<k;
		}
		else if(!strcmp(s,"all")) b=-1;
		else b=0;
	}
	return 0;
}