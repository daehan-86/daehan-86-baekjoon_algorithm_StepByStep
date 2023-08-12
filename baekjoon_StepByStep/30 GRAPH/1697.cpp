#include<iostream>
#include<queue>
using namespace std;
bool visit[100001];
queue<pair<int,int>>q;
int main(void){
	int n,k;
	cin>>n>>k;
	q.push({k,0});
	visit[k]=1;
	while(!q.empty()){
		int x=q.front().first,t=q.front().second;
		q.pop();
		if(x==n){
			cout<<t;
			return 0;
		}
		if(x%2==0&&!visit[x/2]){
			q.push({x/2,t+1});
			visit[x/2]=1;
		}
		if(x>0&&!visit[x-1]){
			q.push({x-1,t+1});
			visit[x-1]=1;
		}
		if(x<=max(n,k)&&!visit[x+1]){
			q.push({x+1,t+1});
			visit[x+1]=1;
		}
	}
	return 0;
}