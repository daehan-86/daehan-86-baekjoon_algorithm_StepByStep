#include<iostream>
using namespace std;
int a[3];
int main(void){
	while(1){
		int m=0,s=0;
		for(int i=0;i<3;i++){
			scanf("%d",a+i);
			m=max(m,a[i]);
			s+=a[i];
		}
		if(!a[0]&&!a[1]&&!a[2]) break;
		if(s>2*m){
			if(a[0]==a[1]&&a[1]==a[2]) printf("Equilateral\n");
			else if(a[0]==a[1]||a[1]==a[2]||a[0]==a[2]) printf("Isosceles\n");
			else printf("Scalene\n");
		}
		else printf("Invalid\n");
	}
	return 0;
}