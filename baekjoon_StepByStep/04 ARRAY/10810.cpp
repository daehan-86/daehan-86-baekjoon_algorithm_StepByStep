#include<iostream>
using namespace std;
int a[101];
int main(void){
	int n,m,i,j,k;
	scanf("%d %d",&n,&m);
	while(m--){
		scanf("%d %d %d",&i,&j,&k);
		for(int l=i;l<=j;l++)a[l]=k;
	}
	for(int i=1;i<=n;i++)printf("%d ",a[i]);
	return 0;
}