#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;
int dir[4][2]={{1,0},{-1,0},{0,1},{0,-1}};
int n,cnt[500];
bool map[25][25];
bool inner(int x,int y){
	if(x>=0&&x<n&&y>=0&&y<n) return 1;
	return 0;
}
int main(void){
	cin>>n;
	char c;
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++){
			cin>>c;
			map[i][j]=c=='1'?1:0;
		}
	queue<pair<int,int>>q;
	int res=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(map[i][j]){
				res++;
				q.push(make_pair(i,j));
				map[i][j]=0;
				cnt[res]=1;
				while(!q.empty()){
					int x=q.front().first,y=q.front().second;
					q.pop();
					for(int d=0;d<4;d++){
						int dx=x+dir[d][0],dy=y+dir[d][1];
						if(inner(dx,dy)&&map[dx][dy]){
							q.push(make_pair(dx,dy));
							map[dx][dy]=0;
							cnt[res]++;
						}
					}
				}
			}
		}
	}
	printf("%d\n",res);
	sort(cnt+1,cnt+res+1);
	for(int i=1;i<=res;i++) printf("%d\n",cnt[i]);
	return 0;
}