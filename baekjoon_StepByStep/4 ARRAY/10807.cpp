#include<iostream>
using namespace std;
int n,a[201],v;
int main(void){
	cin>>n;
	for(int i=0;i<n;i++){
		scanf("%d",&v);
		a[v+100]++;
	}
	cin>>v;
	cout<<a[v+100];
	return 0;
}