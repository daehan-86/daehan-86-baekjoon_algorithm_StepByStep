#include<iostream>
using namespace std;

int main(void){
	int r,n,s=0,a,b;
	scanf("%d %d",&r,&n);
	for(int i=0;i<n;i++){
		scanf("%d %d",&a,&b);
		s+=a*b;
	}
	if(r==s)printf("Yes");
	else printf("No");
	return 0;
}