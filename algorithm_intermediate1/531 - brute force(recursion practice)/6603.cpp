#include<iostream>
using namespace std;
int n,v[14],a[6];
void dp(int d,int p){
	if(d==6){
		for(int i=0;i<d;i++) printf("%d ",a[i]);
		printf("\n");
		return;
	}
	for(int i=p+1;i<n;i++){
		a[d]=v[i];
		dp(d+1,i);
	}
}
int main(void){
	while(1){
		scanf("%d",&n);
		if(!n) return 0;
		for(int i=0;i<n;i++) scanf("%d",v+i);
		dp(0,-1);
		printf("\n");
	}
	return 0;
}