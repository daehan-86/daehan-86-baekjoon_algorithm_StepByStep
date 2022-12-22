#include<iostream>
#include<math.h>
using namespace std;
int n;
long long mi=99999999999,ma;
bool visit[10],a[10];
void br(int d,int p,long long t){
	if(d==n+1){
		mi=min(mi,t);
		ma=max(ma,t);
		return;
	}
	if(a[d]){
		for(int i=p+1;i<10;i++){
			if(!visit[i]){
				visit[i]=1;
				br(d+1,i,t*10+i);
				visit[i]=0;
			}
		}
	}
	else{
		for(int i=p-1;i>=0;i--){
			if(!visit[i]){
				visit[i]=1;
				br(d+1,i,t*10+i);
				visit[i]=0;
			}
		}
	}
}
int main(void){
	cin>>n;
	char c;
	for(int i=0;i<n;i++){
		cin>>c;
		if(c=='<')a[i+1]=1;
	}
	for(int i=0;i<10;i++){
		visit[i]=1;
		br(1,i,i);
		visit[i]=0;
	}
	if(ma<pow(10,n)) printf("0");
	printf("%lld\n",ma);
	if(mi<pow(10,n)) printf("0");
	printf("%lld\n",mi);
	return 0;
}