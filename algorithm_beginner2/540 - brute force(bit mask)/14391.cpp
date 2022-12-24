#include<iostream>
#include<cmath>
using namespace std;
int v[4][4],n,m,res;
void br(int b,int s){
	if(b==(1<<(n*m))-1){
		res=max(res,s);
		return;
	}
	int i;
	for(i=0;i<n*m;i++) if(!(b&(1<<i)))break;
	int x=i/m,y=i%m,k=0,tb=b;
	for(i=x;i<n;i++){
		if(!(b&(1<<(i*m+y)))){
			tb|=(1<<(i*m+y));
			k*=10;
			k+=v[i][y];
			br(tb,s+k);
		}
		else break;
	}
	k=0,tb=b;
	for(i=y;i<m;i++){
		if(!(b&(1<<(x*m+i)))){
			tb|=(1<<(x*m+i));
			k*=10;
			k+=v[x][i];
			br(tb,s+k);
		}
		else break;
	}
}
int main(void){
	cin>>n>>m;
	char c;
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++){
			cin>>c;
			v[i][j]=c-'0';
		}
	br(0,0);
	cout<<res;
	return 0;
}