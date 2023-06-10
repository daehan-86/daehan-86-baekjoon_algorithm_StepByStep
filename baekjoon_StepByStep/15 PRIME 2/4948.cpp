#include<iostream>
using namespace std;
#define m 246913
bool prime[m];
int main(void){
	int n;
	fill(prime+2,prime+m,1);
	for(int i=2;i<m;i++){
		if(prime[i]){
			for(int j=2;i*j<m;j++){
				prime[i*j]=0;
			}
		}
	}
	while(1){
		scanf("%d",&n);
		if(!n)break;
		int c=0;
		for(int i=n+1;i<=2*n;i++)
			if(prime[i]) c++;
		printf("%d\n",c);
	}
	return 0;
}