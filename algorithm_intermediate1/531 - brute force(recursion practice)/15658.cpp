#include<iostream>
#define INF 1111111111
using namespace std;
int n,v[12],mi=INF,ma=-1*INF;
void dp(int k,int sum,int p,int s,int m,int d){
	if(k==n){
		mi=min(mi,sum);
		ma=max(ma,sum);
		return;
	}
	if(p) dp(k+1,sum+v[k],p-1,s,m,d);
	if(s) dp(k+1,sum-v[k],p,s-1,m,d);
	if(m) dp(k+1,sum*v[k],p,s,m-1,d);
	if(d) dp(k+1,sum/v[k],p,s,m,d-1);
}
int main(void){
	cin>>n;
	int p,s,m,d;
	for(int i=0;i<n;i++)scanf("%d",v+i);
	scanf("%d %d %d %d",&p,&s,&m,&d);
	dp(1,v[0],p,s,m,d);
	printf("%d\n%d",ma,mi);
	return 0;
}