#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int n,m,s,a,b,res[100001],k=1;
bool visit[100001];
vector<int>v[100001];
void dp(int p){
	visit[p]=1;
	res[p]=k;
	k++;
	for(int i=0;i<v[p].size();i++){
		if(!visit[v[p][i]])
			dp(v[p][i]);
	}
}
int main(void){
	cin.tie(0);
	ios::sync_with_stdio(0);
	cin>>n>>m>>s;
	while(m--){
		cin>>a>>b;
		v[a].push_back(b);
		v[b].push_back(a);
	}
	for(int i=1;i<=n;i++) sort(v[i].begin(),v[i].end(),greater<int>());
	dp(s);
	for(int i=1;i<=n;i++) cout<<res[i]<<"\n";
	return 0;
}