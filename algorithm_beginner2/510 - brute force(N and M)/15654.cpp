#include<iostream>
#include<algorithm>
using namespace std;
int n,m,v[10];
bool visit[10];
void br(int *a,int d){
	if(d==m){
		for(int i=0;i<m;i++)printf("%d ",a[i]);
		printf("\n");
		return;
	}
	for(int i=0;i<n;i++){
		if(!visit[i]){
			a[d]=v[i];
			visit[i]=1;
			br(a,d+1);
			visit[i]=0;
		}
	}
}
int main(void){
	cin>>n>>m;
	int a[10];
	for(int i=0;i<n;i++) scanf("%d",&v[i]);
	sort(v,v+n);
	br(a,0);
	return 0;
}