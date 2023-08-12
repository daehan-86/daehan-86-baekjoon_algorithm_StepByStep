#include<iostream>
#include<queue>
#include<vector>
#define INF 2147483647
using namespace std;
typedef pair<int,int> p;
int n,m,s,a,b,c,res[20001];
priority_queue<p,vector<p>,greater<p>>q;
int main(void){
	cin.tie(0);
	ios::sync_with_stdio(0);
	cin>>n>>m>>s;
	fill(res,res+20001,INF);
	vector<p>v[n+1];
	for(int i=0;i<m;i++){
		cin>>a>>b>>c;
		v[a].push_back({b,c});
	}
	q.push({0,s});
	res[s]=0;
	while(!q.empty()){
		int x=q.top().second,d=q.top().first;
		q.pop();
		if(res[x]<d) continue;
		for(int i=0;i<v[x].size();i++){
			int dx=v[x][i].first,dd=v[x][i].second+d;
			if(dd<res[dx]){
				res[dx]=dd;
				q.push({dd,dx});
			}
		}
	}
	for(int i=1;i<=n;i++){
		if(res[i]==INF)cout<<"INF\n";
		else cout<<res[i]<<"\n";
	}
	return 0;
}