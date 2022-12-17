#include<iostream>
#include<algorithm>
using namespace std;
int n,m,v[10],k;
bool visit[10001];
void br(int *a,int d,int p){
	if(d==m){
		for(int i=0;i<m;i++) printf("%d ",a[i]);
		printf("\n");
		return;
	}
	for(int i=p;i<k;i++){
		a[d]=v[i];
		br(a,d+1,i);
	}
}
int main(void){
	cin>>n>>m;
	int a[10],t;
	for(int i=0;i<n;i++){
		scanf("%d",&t);
		if(!visit[t]){
			v[k]=t;
			k++;
			visit[t]=1;
		}
	}
	sort(v,v+k);
	br(a,0,0);
	return 0;
}