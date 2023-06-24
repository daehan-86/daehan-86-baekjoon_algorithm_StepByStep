#include<iostream>
using namespace std;
int a[100001];
int main(void){
	int n,k,res=-100000000;
	scanf("%d %d",&n,&k);
	for(int i=0;i<n;i++){
		scanf("%d",a+i);
		if(i)a[i]+=a[i-1];
	}
	for(int i=k-1;i<n;i++)
		res=max(res,a[i]-(i<k?0:a[i-k]));
	cout<<res;
	return 0;
}