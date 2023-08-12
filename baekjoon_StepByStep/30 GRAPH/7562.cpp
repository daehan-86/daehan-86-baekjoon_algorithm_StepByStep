#include<iostream>
#include<queue>
using namespace std;
typedef pair<int,int> p;
bool visit[301][301];
int n,dir[8][2]={{2,1},{2,-1},{-2,1},{-2,-1},{1,2},{1,-2},{-1,2},{-1,-2}};
p a,b;
queue<pair<p,int>>q;
bool inner(int x,int y){
	if(x>=0&&x<n&&y>=0&&y<n) return 1;
	else return 0;
}
int main(void){
	cin.tie(0);
	ios::sync_with_stdio(0);
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		cin>>a.first>>a.second>>b.first>>b.second;
		fill(visit[0],visit[n],0);
		q.push({a,0});
		visit[a.first][a.second]=1;
		while(!q.empty()){
			int x=q.front().first.first,y=q.front().first.second,k=q.front().second;
			q.pop();
			if(b.first==x&&b.second==y){
				cout<<k<<"\n";
				break;
			}
			for(int d=0;d<8;d++){
				int dx=x+dir[d][0],dy=y+dir[d][1];
				if(inner(dx,dy)&&!visit[dx][dy]){
					q.push({{dx,dy},k+1});
					visit[dx][dy]=1;
				}
			}
		}
		q=queue<pair<p,int>>();
	}
	return 0;
}