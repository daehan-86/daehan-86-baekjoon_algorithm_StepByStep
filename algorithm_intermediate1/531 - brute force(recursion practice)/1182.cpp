#include<iostream>
using namespace std;
int v[21],n,k,res;
void dp(int d,int p,int s){
	if(d&&s==k) res++;
	if(d==n) return;
	for(int i=p;i<n;i++)dp(d+1,i+1,s+v[i]);
}
int main(void){
	cin>>n>>k;
	for(int i=0;i<n;i++)scanf("%d",v+i);
	dp(0,0,0);
	cout<<res;
	return 0;
}