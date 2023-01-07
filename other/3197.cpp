#include<iostream>
#include<queue>
using namespace std;
int n,m,res,xl,yl,dir[4][2]={{1,0},{-1,0},{0,1},{0,-1}};
char map[1501][1501];
bool visl[1501][1501],vism[1501][1501];
queue<pair<int,int>>ql,qm,q;
bool inner(int x,int y){
	if(x>=0&&x<n&&y>=0&&y<m) return 1;
	return 0;
}
bool link(){
	if(!res){
		ql.push(make_pair(xl,yl));
		visl[xl][yl]=1;
	}
	q=ql;
	ql=queue<pair<int,int>>();
	while(!q.empty()){
		int x=q.front().first,y=q.front().second;
		q.pop();
		for(int d=0;d<4;d++){
			int dx=x+dir[d][0],dy=y+dir[d][1];
			if(inner(dx,dy)&&!visl[dx][dy]){
				visl[dx][dy]=1;
				if(map[dx][dy]=='.'){
					q.push(make_pair(dx,dy));
				}
				else if(map[dx][dy]=='X'){
					ql.push(make_pair(dx,dy));
				}
				else return 0;
			}
		}
	}
	return 1;
}
void melt(){
	if(!res){
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				if(map[i][j]!='X'){
					qm.push(make_pair(i,j));
					vism[i][j]=1;
				}
			}
		}
	}
	q=qm;
	qm=queue<pair<int,int>>();
	while(!q.empty()){
		int x=q.front().first,y=q.front().second;
		q.pop();
		for(int d=0;d<4;d++){
			int dx=x+dir[d][0],dy=y+dir[d][1];
			if(inner(dx,dy)&&!vism[dx][dy]){
				vism[dx][dy]=1;
				if(map[dx][dy]=='X'){
					qm.push(make_pair(dx,dy));
					map[dx][dy]='.';
				}
				else{
					q.push(make_pair(dx,dy));
				}
			}
		}
	}
}
int main(void){
	cin>>n>>m;
	for(int i=0;i<n;i++){
		scanf("%s",map[i]);
		for(int j=0;j<m;j++){
			if(map[i][j]=='L'){
				xl=i;
				yl=j;
			}
		}
	}
	while(link()){
		melt();
		res++;
	}
	cout<<res;
	return 0;
}