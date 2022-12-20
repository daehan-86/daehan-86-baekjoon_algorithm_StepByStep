#include<iostream>
using namespace std;
int v[15],n;
bool visit[15];
void br(int *a,int d,int p){
	if(d==6){
		for(int i=0;i<6;i++)printf("%d ",a[i]);
		printf("\n");
		return;
	}
	for(int i=p;i<n;i++){
		if(!visit[i]){
			visit[i]=1;
			a[d]=v[i];
			br(a,d+1,i);
			visit[i]=0;
		}
	}
}
int main(void){
	while(1){
		scanf("%d",&n);
		if(!n)break;
		int a[15];
		for(int i=0;i<n;i++)scanf("%d",v+i);
		br(a,0,0);
		printf("\n");
	}
	return 0;
}