#include<iostream>
#include<algorithm>
using namespace std;
int n,m,v[10],visit[10001],k;
void br(int *a,int d){
	if(d==m){
		for(int i=0;i<m;i++) printf("%d ",a[i]);
		printf("\n");
		return;
	}
	for(int i=0;i<k;i++){
		if(visit[v[i]]){
			a[d]=v[i];
			visit[v[i]]--;
			br(a,d+1);
			visit[v[i]]++;
		}
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
		}
		visit[t]++;
	}
	sort(v,v+k);
	br(a,0);
	return 0;
}