#include<iostream>
using namespace std;
int n,m;
bool visit[10];
void br(int *a,int k){
	if(k==m){
		for(int i=0;i<m;i++) printf("%d ",a[i]);
		printf("\n");
		return;
	}
	for(int i=1;i<=n;i++){
		if(!visit[i]){
			a[k]=i;
			visit[i]=1;
			br(a,k+1);
			visit[i]=0;
		}
	}
}
int main(void){
	cin>>n>>m;
	int a[8];
	br(a,0);
	return 0;
}