#include<iostream>
#include<queue>
#include<string>
#include<tuple>
using namespace std;
bool map[101][101];
int n,m,dir[4][2]={{1,0},{-1,0},{0,1},{0,-1}},res;
string s;
queue<tuple<int,int,int>>q;
bool inner(int x,int y){
	if(x>=0&&x<n&&y>=0&&y<m) return 1;
	return 0;
}
int main(void){
	cin.tie(0);
	ios::sync_with_stdio(0);
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>s;
		for(int j=0;j<m;j++)
			map[i][j]=s[j]-'0';
	}
	q.push({0,0,1});
	map[0][0]=0;
	while(!q.empty()){
		int x=get<0>(q.front()),y=get<1>(q.front()),k=get<2>(q.front());
		q.pop();
		if(x==n-1&&y==m-1){
			cout<<k;
			break;
		}
		for(int d=0;d<4;d++){
			int dx=x+dir[d][0],dy=y+dir[d][1];
			if(inner(dx,dy)&&map[dx][dy]){
				map[dx][dy]=0;
				q.push({dx,dy,k+1});
			}
		}
	}
	return 0;
}