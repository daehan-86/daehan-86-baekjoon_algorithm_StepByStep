#include<iostream>
using namespace std;
int gcd(int x,int y){
	if(!y) return x;
	else return gcd(y,x%y);
}
int main(void){
	int n,a,b;
	scanf("%d",&n);
	while(n--){
		scanf("%d %d",&a,&b);
		cout<<a*b/gcd(a,b)<<"\n";
	}
	return 0;
}