#include<iostream>
using namespace std;
int map[129][129],c[2];
void dc(int x,int y,int n){
	int t=map[x][y],k=n/2;
	for(int i=x;i<x+n;i++){
		for(int j=y;j<y+n;j++){
			if(t!=map[i][j]){
				dc(x,y,k);
				dc(x+k,y,k);
				dc(x,y+k,k);
				dc(x+k,y+k,k);
				return;
			}
		}
	}
	c[t]++;
	return;
}
int main(void){
	cin.tie(0);
	ios::sync_with_stdio(0);
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>map[i][j];
		}
	}
	dc(0,0,n);
	cout<<c[0]<<"\n"<<c[1];
	return 0;
}