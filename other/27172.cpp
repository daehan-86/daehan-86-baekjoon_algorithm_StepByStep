#include<iostream>
#include<vector>
#include<algorithm>
#define INF 1000001
using namespace std;
bool visit[INF];
int res[INF],a[100001];
int main(void){
	int n,t;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",a+i);
		visit[a[i]]=1;
	}
	for(int i=0;i<INF;i++){
		if(visit[i]){
			for(int j=2;i*j<INF;j++){
				if(visit[i*j]){
					res[i]++;
					res[i*j]--;
				}
			}
		}
	}
	for(int i=0;i<n;i++) printf("%d ",res[a[i]]);
	return 0;
}