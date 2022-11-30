#include<iostream>
using namespace std;
int gcd(int a,int b){
	if(!b) return a;
	else return gcd(b,a%b);
}
int main(void){
	int a,b;
	cin>>a>>b;
	int mi = gcd(a,b);
	int ma = a*b/mi;
	printf("%d\n%d",mi,ma);
	return 0;
}