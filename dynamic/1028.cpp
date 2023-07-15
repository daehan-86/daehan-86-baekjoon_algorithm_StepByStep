#include<iostream>
#include<string>
using namespace std;
int n,m,res;
string s[751];
int cache[751][751][2];
bool dia(int x,int y,int size){
	size--;
	if(x<size||y<size||y+size>=m) return 0;
	if(cache[x-size][y-size][1]>size&&cache[x-size][y+size][0]>size)return 1;
	return 0;
}
int dp(int x,int y){
	//cout<<x<<" "<<y<<"   "<<cache[x][y][0]<<" "<<cache[x][y][1]<<"\n";
	int &l=cache[x][y][0],&r=cache[x][y][1];
	int t=min(l,r);
	for(int i=t;i>res;i--){
		if(dia(x,y,i)){
			return i;
		}
	}
	return 0;
}
int main(void){
	cin.tie(0);
	ios::sync_with_stdio(0);
	cin>>n>>m;
	for(int i=0;i<n;i++)cin>>s[i];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(s[i][j]=='1'){
				for(int k=-1;k<2;k+=2){
					cache[i][j][k==1]=1;
					if(i>0&&j+k>=0&&j+k<m)
						cache[i][j][k==1]+=cache[i-1][j+k][k==1];
				}
				res=max(res,dp(i,j));
			}
		}
	}
	cout<<res;
	return 0;
}