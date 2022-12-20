#include<iostream>
using namespace std;
int map[10][10],n,result=99999999;
bool visit[10];
void br(int *a,int d,int c){
	if(d==n&&map[a[n-1]][a[0]]){
		result=min(result,c+map[a[n-1]][a[0]]);
		return;
	}
	for(int i=0;i<n;i++){
		if(!visit[i]){
			if(d>0&&!map[a[d-1]][i])continue;
			visit[i]=1;
			a[d]=i;
			br(a,d+1,(d>0)?c+map[a[d-1]][i]:c);
			visit[i]=0;
		}
	}
}
int main(void){
	cin>>n;
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			scanf("%d",map[i]+j);
	int a[10];
	br(a,0,0);
	cout<<result;
	return 0;
}