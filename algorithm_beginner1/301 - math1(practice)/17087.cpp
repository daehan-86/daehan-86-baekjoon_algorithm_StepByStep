#include<iostream>
#include<algorithm>
using namespace std;
int gcd(int a,int b){
	if(!b)return a;
	else return gcd(b,a%b);
}
int main(void){
	int n;
	int v[100001];
	cin>>n>>v[n];
	for(int i=0;i<n;i++){
		scanf("%d",&v[i]);
	}
	sort(v,v+n+1);
	int s = v[1]-v[0];
	for(int i=1;i<n;i++){
		s=gcd(s,v[i+1]-v[i]);
	}
	cout<<s;
	return 0;
}