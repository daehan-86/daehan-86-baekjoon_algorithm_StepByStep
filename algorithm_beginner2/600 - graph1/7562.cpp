#include<iostream>
#include<queue>
#include<tuple>
using namespace std;
int n,ix,iy,tx,ty,dir[8][2]={{2,1},{2,-1},{1,2},{1,-2},{-1,2},{-1,-2},{-2,1},{-2,-1}};
bool map[301][301];
queue<tuple<int,int,int>>q;
bool inner(int x,int y){
	if(x>=0&&x<n&&y>=0&&y<n) return 1;
	return 0;
}
int main(void){
	int t;
	cin>>t;
	while(t--){
		scanf("%d %d %d %d %d",&n,&ix,&iy,&tx,&ty);
		q=queue<tuple<int,int,int>>();
		fill(map[0],map[n],0);
		map[ix][iy]=1;
		q.push(make_tuple(ix,iy,0));
		while(!q.empty()){
			int x=get<0>(q.front()),y=get<1>(q.front()),k=get<2>(q.front());
			if(x==tx&&y==ty){
				printf("%d\n",k);
				break;
			}
			q.pop();
			for(int d=0;d<8;d++){
				int dx=x+dir[d][0],dy=y+dir[d][1];
				if(inner(dx,dy)&&!map[dx][dy]){
					map[dx][dy]=1;
					q.push(make_tuple(dx,dy,k+1));
				}
			}
		}
	}
	return 0;
}