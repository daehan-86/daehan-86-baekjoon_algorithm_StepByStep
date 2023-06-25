#include<iostream>
using namespace std;
int a[100001],n;
long long res,t,p=1000000001;
int main(void){
	cin.tie(0);
	ios::sync_with_stdio(0);
	cin>>n;
	for(int i=0;i<n-1;i++) cin>>a[i];
	for(int i=0;i<n-1;i++){
		cin>>t;
		res+=min(t,p)*a[i];
		p=min(p,t);
	}
	cout<<res;
	return 0;
}