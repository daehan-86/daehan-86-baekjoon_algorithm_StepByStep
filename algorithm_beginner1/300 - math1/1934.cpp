#include<iostream>
using namespace std;
int gcd(int a,int b){
	if(!b) return a;
	else return gcd(b,a%b);
}
int main(void){
	int t,a,b;
	cin>>t;
	while(t--){
		scanf("%d %d",&a,&b);
		printf("%d\n",a*b/gcd(a,b));
	}
	return 0;
}