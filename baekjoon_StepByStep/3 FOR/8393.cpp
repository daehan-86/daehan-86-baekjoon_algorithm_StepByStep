#include<iostream>
using namespace std;

int main(void){
	int n,s=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)s+=i;
	cout<<s;
	return 0;
}