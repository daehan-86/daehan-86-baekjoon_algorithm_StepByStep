#include<iostream>
using namespace std;
int a[101][101];
int main(void){
	int n,m,t;
	cin>>n>>m;
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
			scanf("%d",a[i]+j);
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			scanf("%d",&t);
			printf("%d ",t+a[i][j]);
		}
		printf("\n");
	}
	return 0;
}