#include<iostream>
#include<queue>
using namespace std;
bool visit[100001];
queue<pair<int,int>>q;
int main(void){
	int n,m;
	cin>>n>>m;
	visit[n]=1;
	q.push(make_pair(n,0));
	while(!q.empty()){
		int x=q.front().first,d=q.front().second;
		if(x==m){
			printf("%d",d);
			return 0;
		}
		q.pop();
		if(2*x<=m+1&&!visit[x*2]){
			visit[x*2]=1;
			q.push(make_pair(x*2,d));
		}
		if(x>0&&!visit[x-1]){
			visit[x-1]=1;
			q.push(make_pair(x-1,d+1));
		}
		if(x<m&&!visit[x+1]){
			visit[x+1]=1;
			q.push(make_pair(x+1,d+1));
		}
	}
	return 0;
}