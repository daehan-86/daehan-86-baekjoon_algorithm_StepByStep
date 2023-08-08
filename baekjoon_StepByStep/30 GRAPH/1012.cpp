#include<iostream>
#include<queue>
using namespace std;
bool map[51][51];
int dir[4][2]={{1,0},{-1,0},{0,1},{0,-1}},n,m,k,a,b;
queue<pair<int,int>>q;
bool inner(int x,int y){
	if(x>=0&&x<n&&y>=0&&y<m)return 1;
	return 0;
}
int main(void){
	cin.tie(0);
	ios::sync_with_stdio(0);
	int t;
	cin>>t;
	while(t--){
		fill(map[0],map[51],0);
		int c=0;
		cin>>n>>m>>k;
		for(int i=0;i<k;i++){
			cin>>a>>b;
			map[a][b]=1;
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				if(map[i][j]){
					q.push({i,j});
					map[i][j]=0;
					while(!q.empty()){
						int x=q.front().first,y=q.front().second;
						q.pop();
						for(int d=0;d<4;d++){
							int dx=x+dir[d][0],dy=y+dir[d][1];
							if(inner(dx,dy)&&map[dx][dy]){
								q.push({dx,dy});
								map[dx][dy]=0;
							}
						}
					}
					c++;
				}
			}
		}
		cout<<c<<"\n";
	}
	return 0;
}