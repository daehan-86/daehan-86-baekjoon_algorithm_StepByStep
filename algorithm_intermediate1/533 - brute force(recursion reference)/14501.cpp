#include<iostream>
using namespace std;
int n,res;
int v[16][2];
void dp(int d,int s){
	if(d>=n){
		if(d==n) res=max(res,s);
		return;
	}
	if(d+1<n&&d+v[d+1][0]<n)
		dp(d+v[d+1][0],s+v[d+1][1]);
	dp(d+1,s);
}
int main(void){
	cin>>n;
	for(int i=0;i<n;i++) scanf("%d %d",v[i],v[i]+1);
	dp(-1,0);
	cout<<res;
	return 0;
}