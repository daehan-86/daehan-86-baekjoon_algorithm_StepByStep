#include<iostream>
using namespace std;
int n,a[10];
bool visit[10];
void br(int d){
	if(d==n){
		for(int i=0;i<n;i++)printf("%d ",a[i]);
		printf("\n");
		return;
	}
	for(int i=1;i<=n;i++){
		if(!visit[i]){
			a[d]=i;
			visit[i]=1;
			br(d+1);
			visit[i]=0;
		}
	}
}
int main(void){
	cin>>n;
	br(0);
	return 0;
}