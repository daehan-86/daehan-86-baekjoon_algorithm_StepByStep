#include<iostream>
#include<algorithm>
#include<queue>
#include<vector>
using namespace std;
int n,m,s,a,b,x,k=1,res[100001];
bool visit[100001];
vector<int>v[100001];
queue<int>q;
int main(void){
	cin.tie(0);
	ios::sync_with_stdio(0);
	cin>>n>>m>>s;
	while(m--){
		cin>>a>>b;
		v[a].push_back(b);
		v[b].push_back(a);
	}
	q.push(s);
	visit[s]=1;
	while(!q.empty()){
		x=q.front();
		q.pop();
		res[x]=k++;
		sort(v[x].begin(),v[x].end(),greater<int>());
		for(int o:v[x]){
			if(!visit[o]){
				visit[o]=1;
				q.push(o);
			}
		}
	}
	for(int i=1;i<=n;i++) cout<<res[i]<<"\n";
	return 0;
}