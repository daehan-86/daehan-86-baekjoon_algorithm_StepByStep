#include<iostream>
using namespace std;
char v[10];
int a[10],n;
bool visit[10];
bool isok(int d,int a,int b){
	if(!d) return 1;
	if(v[d]=='<'){
		if(a<b) return 1;
		else return 0;
	}
	else{
		if(a<b) return 0;
		else return 1;
	}
}
bool dp(int m,int d,int p){
	if(d==n+1){
		for(int i=0;i<d;i++)printf("%d",a[i]);
		printf("\n");
		return 1;
	}
	if(m){
		for(int i=0;i<10;i++){
			if(!visit[i]&&isok(d,p,i)){
				visit[i]=1;
				a[d]=i;
				if(dp(1,d+1,i)){
					visit[i]=0;
					return 1;
				}
				visit[i]=0;
			}
		}
	}
	else{
		for(int i=9;i>=0;i--){
			if(!visit[i]&&isok(d,p,i)){
				visit[i]=1;
				a[d]=i;
				if(dp(0,d+1,i)){
					visit[i]=0;
					return 1;
				}
				visit[i]=0;
			}
		}
	}
	return 0;
}
int main(void){
	cin>>n;
	for(int i=1;i<=n;i++) cin>>v[i];
	dp(0,0,-1);
	dp(1,0,-1);
	return 0;
}