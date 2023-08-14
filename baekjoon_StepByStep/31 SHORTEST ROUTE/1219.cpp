#include<iostream>
#include<vector>
#include<queue>
#define INF 9223372036854775807
using namespace std;
typedef long long ll;
ll n,m,s,e,res[51],d[51],t,a,b,c;
vector<pair<ll,ll>>v[51];
queue<int>q;
bool visit[51];
int main(void){
	cin.tie(0);
	ios::sync_with_stdio(0);
	cin>>n>>s>>e>>m;
	for(int i=0;i<m;i++){
		cin>>a>>b>>c;
		v[a].push_back({b,c});
	}
	for(int i=0;i<n;i++) cin>>d[i];
	fill(res,res+n,INF);
	res[s]=-d[s];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			for(auto x:v[j]){
				if(res[j]!=INF&&res[x.first]>res[j]+x.second-d[x.first]){
					res[x.first]=res[j]+x.second-d[x.first];
					if(i==n-1){
						visit[x.first]=1;
						q.push(x.first);
					}
				}
			}
		}
	}
	if(res[e]==INF) cout<<"gg";
	else{
		while(!q.empty()){
			int x=q.front();
			q.pop();
			for(auto dx:v[x]){
				if(!visit[dx.first]){
					q.push(dx.first);
					visit[dx.first]=1;
				}
			}
		}
		if(visit[e]) cout<<"Gee";
		else cout<<-res[e];
	}
	return 0;
}