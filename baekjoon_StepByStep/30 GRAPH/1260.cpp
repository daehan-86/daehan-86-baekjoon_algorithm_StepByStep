#include<iostream>
#include<queue>
#include<vector>
#include<algorithm>
using namespace std;
bool visit[1001];
vector<int>v[1001];
queue<int>q;
void dp(int x){
	cout<<x<<" ";
	visit[x]=1;
	for(int i=0;i<v[x].size();i++){
		if(!visit[v[x][i]]) dp(v[x][i]);
	}
}
int main(void){
	cin.tie(0);
	ios::sync_with_stdio(0);
	int n,m,s,a,b;
	cin>>n>>m>>s;
	for(int i=0;i<m;i++){
		cin>>a>>b;
		v[a].push_back(b);
		v[b].push_back(a);
	}
	for(int i=1;i<=n;i++) sort(v[i].begin(),v[i].end());
	dp(s);
	cout<<"\n";
	fill(visit,visit+1001,0);
	q.push(s);
	visit[s]=1;
	while(!q.empty()){
		int x=q.front();
		cout<<x<<" ";
		q.pop();
		for(int i=0;i<v[x].size();i++){
			if(!visit[v[x][i]]){
				visit[v[x][i]]=1;
				q.push(v[x][i]);
			}
		}
	}
	return 0;
}