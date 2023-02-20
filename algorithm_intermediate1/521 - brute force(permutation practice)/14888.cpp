#include<iostream>
#define INF 999999999999999999
using namespace std;
int v[11],n;
long long mi=INF,ma=-1*INF;
void br(int k,int p,int s,int m,int d,long long res){
	if(k==n){
		mi=min(mi,res);
		ma=max(ma,res);
		return;
	}
	if(p) br(k+1,p-1,s,m,d,res+v[k]);
	if(s) br(k+1,p,s-1,m,d,res-v[k]);
	if(m) br(k+1,p,s,m-1,d,res*v[k]);
	if(d) br(k+1,p,s,m,d-1,res/v[k]);
}
int main(void){
	cin>>n;
	for(int i=0;i<n;i++)scanf("%d",v+i);
	int p,s,m,d;
	scanf("%d %d %d %d",&p,&s,&m,&d);
	br(1,p,s,m,d,v[0]);
	printf("%lld\n%lld",ma,mi);
	return 0;
}