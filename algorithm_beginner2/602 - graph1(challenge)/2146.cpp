#include<iostream>
#include<queue>
#include<tuple>
#include<vector>
using namespace std;
bool map[101][101],visit[101][101],state;
int n,dir[4][2]={{1,0},{-1,0},{0,1},{0,-1}},res=99999;
priority_queue<tuple<int,int,int>,vector<tuple<int,int,int>>,greater<tuple<int,int,int>>>q;
bool inner(int x,int y){
	if(x>=0&&x<n&&y>=0&&y<n) return 1;
	return 0;
}
int main(void){
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			scanf("%d",map[i]+j);
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(map[i][j]){
				fill(visit[0],visit[n],0);
				q.push(make_tuple(0,i,j));
				visit[i][j]=1;
				state=0;
				while(!q.empty()){
					int k=get<0>(q.top()),x=get<1>(q.top()),y=get<2>(q.top());
					q.pop();
					map[x][y]=0;
					for(int d=0;d<4;d++){
						int dx=x+dir[d][0],dy=y+dir[d][1];
						if(inner(dx,dy)&&!visit[dx][dy]){
							visit[dx][dy]=1;
							if(map[dx][dy]){
								if(!k){
									q.push(make_tuple(0,dx,dy));
									map[dx][dy]=0;
								}
								else{
									res=min(res,k);
									state=1;
									break;
								}
							}
							else{
								q.push(make_tuple(k+1,dx,dy));
							}
						}
					}
					if(state)break;
				}
				q=priority_queue<tuple<int,int,int>,vector<tuple<int,int,int>>,greater<tuple<int,int,int>>>();
			}
		}
	}
	cout<<res;
	return 0;
}