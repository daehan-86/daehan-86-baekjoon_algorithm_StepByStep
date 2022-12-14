#include<iostream>
using namespace std;
int n,m;
void br(int *a,int d,int p){
	if(d==m){
		for(int i=0;i<m;i++) printf("%d ",a[i]);
		printf("\n");
		return;
	}
	for(int i=p+1;i<=n;i++){
		a[d]=i;
		br(a,d+1,i);
	}
}
int main(void){
	cin>>n>>m;
	int a[10];
	br(a,0,0);
	return 0;
}