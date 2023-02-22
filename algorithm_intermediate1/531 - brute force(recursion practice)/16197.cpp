#include<iostream>
#include<string>
#include<queue>
#include<tuple>
using namespace std;
string map[21];
bool visit[21][21][21][21];
int dir[4][2]={{-1,0},{1,0},{0,1},{0,-1}},n,m;
bool inner(int x,int y){
	if(x>=0&&x<n&&y>=0&&y<m) return 1;
	return 0;
}
int move(int &x1,int &y1,int &x2,int &y2,int d){
	int tx1=x1+dir[d][0],ty1=y1+dir[d][1];
	int tx2=x2+dir[d][0],ty2=y2+dir[d][1];
	if(inner(tx1,ty1)^inner(tx2,ty2)) return 1;
	else if((!inner(tx1,ty1))&&(!inner(tx2,ty2))) return -1;
	if(map[tx1][ty1]=='.'){x1=tx1;y1=ty1;}
	if(map[tx2][ty2]=='.'){x2=tx2;y2=ty2;}
	if(x1==x2&&y1==y2) return -1;
	return 0;
}
int main(void){
	int x1,x2,y1,y2,t;
	bool state;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>map[i];
		for(int j=0;j<m;j++){
			if(map[i][j]=='o'){
				if(state){x1=i;y1=j;state=0;}
				else {x2=i;y2=j;state=1;}
				map[i][j]='.';
			}
		}
	}
	queue<tuple<int,int,int,int,int>>q;
	q.push({x1,y1,x2,y2,0});
	visit[x1][y1][x2][y2]=1;
	while(!q.empty()){
		x1=get<0>(q.front()),y1=get<1>(q.front()),x2=get<2>(q.front()),y2=get<3>(q.front()),t=get<4>(q.front()),
		q.pop();
		if(t>9) continue;
		for(int d=0;d<4;d++){
			int dx1=x1,dx2=x2,dy1=y1,dy2=y2;
			int k=move(dx1,dy1,dx2,dy2,d);
			if(!k&&!visit[dx1][dy1][dx2][dy2]){
				visit[dx1][dy1][dx2][dy2]=1;
				q.push({dx1,dy1,dx2,dy2,t+1});
			}
			else if(k>0){
				cout<<t+1;
				return 0;
			}
		}
	}
	cout<<-1;
	return 0;
}