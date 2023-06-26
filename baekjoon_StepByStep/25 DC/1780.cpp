#include<iostream>
using namespace std;
int n,map[2188][2188],c[3];
void dc(int x,int y,int n){
	int &t=map[x][y],k=n/3;
	for(int i=x;i<x+n;i++)
		for(int j=y;j<y+n;j++)
			if(t!=map[i][j]){
				for(int a=0;a<3;a++)
					for(int b=0;b<3;b++)
						dc(x+a*k,y+b*k,k);
				return;
			}
	c[t+1]++;
	return;
}
int main(void){
	cin.tie(0);
	ios::sync_with_stdio(0);
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>map[i][j];
		}
	}
	dc(0,0,n);
	for(int i=0;i<3;i++)cout<<c[i]<<"\n";
	return 0;
}