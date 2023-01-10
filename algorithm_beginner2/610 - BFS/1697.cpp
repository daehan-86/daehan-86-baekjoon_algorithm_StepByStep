#include<iostream>
#include<queue>
using namespace std;
int n,m;
bool visit[200001];
queue<pair<int,int>>q;
int main(void){
	cin>>n>>m;
	q.push(make_pair(n,0));
	visit[n]=1;
	while(!q.empty()){
		int x=q.front().first,d=q.front().second;
		q.pop();
		if(x==m){
			printf("%d",d);
			return 0;
		}
		if(x>0&&!visit[x-1]){
			visit[x-1]=1;
			q.push(make_pair(x-1,d+1));
		}
		if(x<m&&!visit[x+1]){
			visit[x+1]=1;
			q.push(make_pair(x+1,d+1));
		}
		if(x<m&&!visit[x*2]){
			visit[2*x]=1;
			q.push(make_pair(2*x,d+1));
		}
	}
	return 0;
}