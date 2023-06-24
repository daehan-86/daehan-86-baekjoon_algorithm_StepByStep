#include<iostream>
using namespace std;
long long a[1001]={1,};
int main(void){
	long long n,m,s=0,t,res=0;
	scanf("%lld %lld",&n,&m);
	while(n--){
		scanf("%lld",&t);
		s+=t;
		s%=m;
		a[s]++;
	}
	for(int i=0;i<m;i++)
		if(a[i]>1)
			res+=a[i]*(a[i]-1)/2;
	cout<<res;
	return 0;
}