#include<iostream>
using namespace std;
int a[101];
int main(void){
	int n,m,i,j;
	for(int i=0;i<101;i++)a[i]=i;
	cin>>n>>m;
	while(m--){
		scanf("%d %d",&i,&j);
		swap(a[i],a[j]);
	}
	for(int i=1;i<=n;i++)printf("%d ",a[i]);
	return 0;
}