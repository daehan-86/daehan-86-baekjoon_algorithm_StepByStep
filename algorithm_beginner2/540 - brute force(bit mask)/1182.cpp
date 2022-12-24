#include<iostream>
using namespace std;
int n,k,v[21],res;
void br(int t,int p,int s){
	if(n-1==p){
		if(t>0&&s==k) res++;
		return;
	}
	for(int i=p+1;i<n;i++){
		br(t+1,i,s+v[i]);
	}
	br(t,n-1,s);
}
int main(void){
	cin>>n>>k;
	for(int i=0;i<n;i++) scanf("%d",v+i);
	int a[22];
	br(0,-1,0);
	cout<<res;
	return 0;
}