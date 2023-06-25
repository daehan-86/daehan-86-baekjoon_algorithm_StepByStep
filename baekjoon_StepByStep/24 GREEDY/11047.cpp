#include<iostream>
using namespace std;
int a[11],n,k,c;
int main(void){
	scanf("%d %d",&n,&k);
	for(int i=0;i<n;i++)
		scanf("%d",a+i);
	for(int i=n-1;i>=0;i--){
		c+=k/a[i];
		k%=a[i];
	}
	cout<<c;
	return 0;
}