#include<iostream>
#include<math.h>
using namespace std;
int a[21][21],n,result=999999999;
bool visit[21];
void br(int d,int p){
	if(d==n/2){
		int t[2]={0};
		for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++){
				if(visit[i]==visit[j]){
					t[visit[i]]+=a[i][j];
				}
			}
		}
		result=min(result,abs(t[1]-t[0]));
		return;
	}
	for(int i=p;i<n;i++){
		visit[i]=1;
		br(d+1,i+1);
		visit[i]=0;
	}
}
int main(void){
	int t;
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&t);
			a[i][j]+=t;
			a[j][i]+=t;
		}
	}
	br(0,0);
	cout<<result;
	return 0;
}