#include<iostream>
#include<tuple>
#include<queue>
#include<string>
#include<algorithm>
using namespace std;
int visit[101][101],n,m,dir[4][2]={{1,0},{-1,0},{0,1},{0,-1}};
string map[101];
queue<tuple<int,int,int>>q;
bool inner(int x,int y){
	if(x>=0&&x<n&&y>=0&&y<m) return 1;
	return 0;
}
int main(void){
	cin>>m>>n;
	for(int i=0;i<n;i++){
		cin>>map[i];
	}
	fill(visit[0],visit[101],-1);
	q.push({0,0,0});
	visit[0][0]=0;
	while(!q.empty()){
		int x=get<0>(q.front()),y=get<1>(q.front()),k=get<2>(q.front());
		q.pop();
		for(int d=0;d<4;d++){
			int dx=x+dir[d][0],dy=y+dir[d][1];
			if(inner(dx,dy)){
				if(map[dx][dy]=='1'&&(visit[dx][dy]<0||visit[dx][dy]>k+1)){
					visit[dx][dy]=k+1;
					q.push({dx,dy,k+1});
				}
				else if(map[dx][dy]=='0'&&(visit[dx][dy]<0||visit[dx][dy]>k)){
					visit[dx][dy]=k;
					q.push({dx,dy,k});
				}
			}
		}
	}
	printf("%d",visit[n-1][m-1]);
	return 0;
}