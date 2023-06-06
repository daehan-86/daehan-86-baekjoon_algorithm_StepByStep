#include<iostream>
using namespace std;
bool prime[10001];
int main(void){
	int n,m,s=0,t=0;
	scanf("%d %d",&n,&m);
	fill(prime+2,prime+10001,1);
	for(int i=2;i<=m;i++){
		if(prime[i]){
			for(int j=2;j<10001;j++){
				if(i*j>m)break;
				prime[i*j]=0;
			}
		}
	}
	for(int i=m;i>=n;i--){
		if(prime[i]){
			s+=i;
			t=i;
		}
	}
	if(s) printf("%d\n%d",s,t);
	else printf("-1");
	return 0;
}