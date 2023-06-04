#include<iostream>
using namespace std;

int main(void){
	int t,x,y,m=-1;
	for(int i=1;i<10;i++){
		for(int j=1;j<10;j++){
			scanf("%d",&t);
			if(m<t){
				m=t;
				x=i;
				y=j;
			}
		}
	}
	printf("%d\n%d %d",m,x,y);
	return 0;
}