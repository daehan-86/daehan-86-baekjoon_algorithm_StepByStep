#include<iostream>
using namespace std;

int main(void){
	int n,a,b,t;
	cin>>n>>a;
	b=a;
	if(n!=1){
		for(int i=1;i<n;i++){
			scanf("%d",&t);
			a=min(a,t);
			b=max(b,t);
		}
	}
	printf("%d",a*b);
	return 0;
}