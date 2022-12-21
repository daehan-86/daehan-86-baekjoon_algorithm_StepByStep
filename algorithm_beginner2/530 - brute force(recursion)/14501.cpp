#include<iostream>
using namespace std;
int v[20][2],n,result;
void br(int p,int s){
	if(p==n){
		result=max(result,s);
		return;
	}
	for(int i=p;i<n;i++){
		if(i+v[i][0]<=n) br(i+v[i][0],s+v[i][1]);
		else result=max(result,s);
	}
}
int main(void){
	cin>>n;
	for(int i=0;i<n;i++)scanf("%d %d",v[i],v[i]+1);
	int a[20];
	br(0,0);
	cout<<result;
	return 0;
}