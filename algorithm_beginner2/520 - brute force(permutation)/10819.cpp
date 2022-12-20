#include<iostream>
#include<math.h>
using namespace std;
int v[10],n,result;
bool visit[10];
void br(int *a,int d){
	if(d==n){
		int t=0;
		for(int i=1;i<n;i++) t+=abs(a[i-1]-a[i]);
		result=max(result,t);
		return;
	}
	for(int i=0;i<n;i++){
		if(!visit[i]){
			visit[i]=1;
			a[d]=v[i];
			br(a,d+1);
			visit[i]=0;
		}
	}
}
int main(void){
	int a[10];
	cin>>n;
	for(int i=0;i<n;i++)scanf("%d",v+i);
	br(a,0);
	cout<<result;
	return 0;
}