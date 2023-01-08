#include<iostream>
using namespace std;
int n,m,dir[4][2]={{1,0},{0,1},{-1,0},{0,-1}};
char map[51][51];
bool visit[51][51];
bool inner(int x,int y){
	if(x>=0&&x<n&&y>=0&&y<m) return 1;
	return 0;
}
bool dp(int x,int y,int g,char c){
	if(visit[x][y])return 1;
	visit[x][y]=1;
	for(int d=0;d<4;d++){
		if(d-g!=2&&g-d!=2){
			int dx=x+dir[d][0],dy=y+dir[d][1];
			if(inner(dx,dy)&&map[dx][dy]==c&&dp(dx,dy,d,c))return 1;
		}
	}
	return 0;
}
int main(void){
	cin>>n>>m;
	for(int i=0;i<n;i++){
		scanf("%s",map[i]);
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(!visit[i][j]&&dp(i,j,0,map[i][j])){
				printf("Yes");
				return 0;
			}
		}
	}
	printf("No");
	return 0;
}