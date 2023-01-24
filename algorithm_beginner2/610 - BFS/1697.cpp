#include<iostream>
#include<queue>
using namespace std;
int n,m;
bool visit[200001];
queue<pair<int,int>>q;
int main(void){
	cin>>n>>m;
	q.push(make_pair(m,0));
	visit[m]=1;
	while(!q.empty()){
		int x=q.front().first,d=q.front().second;
		q.pop();
		if(x==n){
			printf("%d",d);
			return 0;
		}
		if(x>0&&!visit[x-1]){
			visit[x-1]=1;
			q.push(make_pair(x-1,d+1));
		}
		if((x<=m||x<n)&&!visit[x+1]){
			visit[x+1]=1;
			q.push(make_pair(x+1,d+1));
		}
		if(x%2==0&&!visit[x/2]){
			q.push(make_pair(x/2,d+1));
			visit[x/2]=1;
		}
	}
	return 0;
}