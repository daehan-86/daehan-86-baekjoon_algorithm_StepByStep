#include<iostream>
#include<queue>
#include<tuple>
using namespace std;
int n,m,tom,dir[4][2]={{1,0},{-1,0},{0,1},{0,-1}},map[1001][1001];
queue<tuple<int,int,int>>q;
bool inner(int x,int y){
	if(x>=0&&x<n&&y>=0&&y<m) return 1;
	return 0;
}
int main(void){
	cin>>m>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			scanf("%d",map[i]+j);
			if(map[i][j]>-1)tom++;
			if(map[i][j]>0) q.push(make_tuple(i,j,0));
		}
	}
	while(!q.empty()){
		int x=get<0>(q.front()),y=get<1>(q.front()),k=get<2>(q.front());
		if(!--tom){
			printf("%d",k);
			return 0;
		}
		q.pop();
		for(int d=0;d<4;d++){
			int dx=x+dir[d][0],dy=y+dir[d][1];
			if(inner(dx,dy)&&!map[dx][dy]){
				map[dx][dy]=1;
				q.push(make_tuple(dx,dy,k+1));
			}
		}
	}
	printf("-1");
	return 0;
}