#include<iostream>
#include<queue>
using namespace std;
bool map[51][51];
int n,m,dir[8][2]={{1,0},{1,1},{1,-1},{0,1},{0,-1},{-1,1},{-1,0},{-1,-1}};
queue<pair<int,int>>q;
bool inner(int x,int y){
	if(x>=0&&x<n&&y>=0&&y<m) return 1;
	return 0;
}
int main(void){
	while(1){
		int res=0;
		scanf("%d %d",&m,&n);
		if(!n&&!m) break;
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				scanf("%d",map[i]+j);
			}
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				if(map[i][j]){
					res++;
					q.push(make_pair(i,j));
					map[i][j]=0;
					while(!q.empty()){
						int x=q.front().first,y=q.front().second;
						q.pop();
						for(int d=0;d<8;d++){
							int dx=x+dir[d][0],dy=y+dir[d][1];
							if(inner(dx,dy)&&map[dx][dy]){
								map[dx][dy]=0;
								q.push(make_pair(dx,dy));
							}
						}
					}
				}
			}
		}
		printf("%d\n",res);
	}
	return 0;
}