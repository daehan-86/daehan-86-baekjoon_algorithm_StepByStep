#include<iostream>
using namespace std;
int gcd(int a,int b){
	if(!b)return a;
	else return gcd(b,a%b);
}
int a[100001],d[100001];
int main(void){
	int n,t,c=0;
	scanf("%d %d",&n,a);
	for(int i=1;i<n;i++){
		scanf("%d",&a[i]);
		d[i-1]=a[i]-a[i-1];
	}
	t=gcd(d[0],d[1]);
	for(int i=2;i<n-1;i++) t=gcd(t,d[i]);
	for(int i=0;i<n-1;i++) c+=d[i]/t-1;
	cout<<c;
	return 0;
}