#include<iostream>
using namespace std;

int main(void){
	int n,a,b;
	cin>>n;
	for(int i=1;i<=n;i++){
		scanf("%d %d",&a,&b);
		printf("Case #%d: %d + %d = %d\n",i,a,b,a+b);
	}
	return 0;
}