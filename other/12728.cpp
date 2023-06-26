#include<iostream>
#include<cmath>
using namespace std;
typedef long long ll;

int main(void){
	ll t,n;
	scanf("%lld",&t);
	for(int i=1;i<=t;i++){
		scanf("%lld",&n);
		pp res = div(n);
		printf("Case #%d: %03d",i,(int)(res.first+res.second*sqrt(5))%1000);
	}
	return 0;
}