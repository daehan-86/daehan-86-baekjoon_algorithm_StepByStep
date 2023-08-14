// #include<iostream>
// #define INF 4223372036854775807LL
// using namespace std;
// long long res[101][101],n,m,s,e,c;
// int main(void){
// 	cin.tie(0);
// 	ios::sync_with_stdio(0);
// 	cin>>n>>m;
// 	fill(res[0],res[n],INF);
// 	for(int i=0;i<n;i++) res[i][i]=0LL;
// 	for(int i=0;i<m;i++){
// 		cin>>s>>e>>c;
// 		res[s-1][e-1]=min(res[s-1][e-1],c);
// 	}
// 	for(int k=0;k<n;k++)
// 		for(int i=0;i<n;i++)
// 			for(int j=0;j<n;j++)
// 				res[i][j]=min(res[i][j],res[i][k]+res[k][j]);
// 	for(int i=0;i<n;i++){
// 		for(int j=0;j<n;j++) cout<<(res[i][j]==INF?0:res[i][j])<<" ";
// 		cout<<"\n";
// 	}
// 	return 0;
// }

#include<iostream>
#include<queue>
#include<vector>
#define INF 4223372036854775807LL
using namespace std;
typedef long long ll;
typedef pair<long,long> p;
priority_queue<p,vector<p>,greater<p>>q;
vector<p>v[101];
ll n,m,res[101][101],a,b,c;
int main(void){
	cin.tie(0);
	ios::sync_with_stdio(0);
	fill(res[0],res[101],INF);
	cin>>n>>m;
	for(int i=0;i<m;i++){
		cin>>a>>b>>c;
		v[a].push_back({b,c});
	}
	for(int s=1;s<=n;s++){
		q.push({0,s});
		res[s][s]=0;
		while(!q.empty()){
			ll x=q.top().second,d=q.top().first;
			q.pop();
			if(res[s][x]<d) continue;
			for(int i=0;i<v[x].size();i++){
				ll dx=v[x][i].first,dd=v[x][i].second+d;
				if(res[s][dx]>dd){
					res[s][dx]=dd;
					q.push({dd,dx});
				}
			}
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++) cout<<(res[i][j]==INF?0:res[i][j])<<" ";
		cout<<"\n";
	}
	return 0;
}