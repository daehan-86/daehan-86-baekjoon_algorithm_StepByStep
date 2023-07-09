#include<iostream>
#define INF 2000000000
using namespace std;
int n,m,cache[501][501],map[501][501],dir[4][2]={{1,0},{-1,0},{0,1},{0,-1}},no[4]={1,0,3,2};
bool inner(int x,int y){
	if(x>=0&&x<n&&y>=0&&y<m)return 1;
	return 0;
}
int dp(int x,int y,int d){
	int &ret=cache[x][y];
	if(ret!=-1) return ret;
	ret=0;
	for(int i=0;i<4;i++){
		int dx=x+dir[i][0],dy=y+dir[i][1];
		if((d==-1||i!=no[d])&&inner(dx,dy)&&map[x][y]>map[dx][dy]){
			ret+=dp(dx,dy,i);
		}
	}
	return ret;
}
int main(void){
	cin.tie(0);
	ios::sync_with_stdio(0);
	cin>>n>>m;
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
			cin>>map[i][j];
	fill(cache[0],cache[501],-1);
	cache[n-1][m-1]=1;
	cout<<dp(0,0,-1)<<"\n";
	return 0;
}