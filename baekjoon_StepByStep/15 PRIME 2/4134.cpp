#include<iostream>
using namespace std;
typedef long long ll;
int main(void){
	ll n,t;
	cin>>t;
	while(t--){
		scanf("%lld",&n);
		if(n==1||!n){printf("2\n");continue;}
		while(1){
			bool state=1;
			for(ll i=2;i*i<=n;i++){
				if(n%i==0){state=0;break;}
			}
			if(state){
				printf("%lld\n",n);
				break;
			}
			n++;
		}
	}
	return 0;
}