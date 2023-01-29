#include<iostream>
using namespace std;
bool visit[2000001];
int v[21],n;
void dp(int d,int s){
	if(d==n-1) return;
	visit[s+v[d+1]]=1;
	dp(d+1,s+v[d+1]);
	dp(d+1,s);
}
int main(void){
	cin>>n;
	for(int i=0;i<n;i++){
		scanf("%d",v+i);
	}
	dp(-1,0);
	int i=1;
	while(visit[i])i++;
	cout<<i;
	return 0;
}