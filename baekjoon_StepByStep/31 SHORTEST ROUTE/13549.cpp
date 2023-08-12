#include<iostream>
#include<queue>
#define INF 2147483647
using namespace std;
typedef pair<int,int> p;
priority_queue<p,vector<p>,greater<p>>q;
int e,s,visit[100002];
int main(void){
	cin.tie(0);
	ios::sync_with_stdio(0);
	cin>>s>>e;
	fill(visit,visit+100002,INF);
	q.push({0,s});
	visit[s]=0;
	while(!q.empty()){
		int x=q.top().second,d=q.top().first;
		q.pop();
		if(visit[x]<d||x==e) continue;
		if(x>0&&visit[x-1]>d+1){
			visit[x-1]=d+1;
			q.push({d+1,x-1});
		}
		if(x<e&&visit[x+1]>d+1){
			visit[x+1]=d+1;
			q.push({d+1,x+1});
		}
		if(e+2>2*x&&visit[2*x]>d){
			visit[2*x]=d;
			q.push({d,2*x});
		}
	}
	cout<<visit[e];
	return 0;
}