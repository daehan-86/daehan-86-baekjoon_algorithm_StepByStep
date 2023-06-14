#include<iostream>
using namespace std;

int main(void){
	int n,a=0,b=1,c;
	cin>>n;
	if(n<2){cout<<n;return 0;}
	for(int i=2;i<=n;i++){
		c=a+b;
		a=b;
		b=c;
	}
	cout<<c;
	return 0;
}