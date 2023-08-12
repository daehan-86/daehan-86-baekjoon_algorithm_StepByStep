#include<iostream>
#include<queue>
#include<vector>
#define INF 2147483647
using namespace std;
typedef pair<int,int>p;
vector<p>v[801];
priority_queue<p,vector<p>,greater<p>>q;
int res[801];
void dijkstra(int s){
	fill(res,res+801,INF);
	q.push({0,s});
	res[s]=0;
	while(!q.empty()){
		int x=q.top().second,d=q.top().first;
		q.pop();
		if(res[x]<d)continue;
		for(int i=0;i<v[x].size();i++){
			int dx=v[x][i].first,dd=v[x][i].second+d;
			if(res[dx]>dd){
				res[dx]=dd;
				q.push({dd,dx});
			}
		}
	}
}
int main(void){
	cin.tie(0);
	ios::sync_with_stdio(0);
	int n,m,x,y,a,b,c,d,result=INF,k;
	cin>>n>>m;
	for(int i=0;i<m;i++){
		cin>>a>>b>>c;
		v[a].push_back({b,c});
		v[b].push_back({a,c});
	}
	cin>>x>>y;
	dijkstra(1);
	a=res[x];
	b=res[y];
	dijkstra(n);
	c=res[x];
	d=res[y];
	dijkstra(x);
	k=res[y];
	if(k!=INF){
		if(a!=INF&&d!=INF)result=min(result,a+k+d);
		if(b!=INF&&c!=INF)result=min(result,b+c+k);
	}
	if(result==INF) cout<<"-1\n";
	else cout<<result<<"\n";
	return 0;
}