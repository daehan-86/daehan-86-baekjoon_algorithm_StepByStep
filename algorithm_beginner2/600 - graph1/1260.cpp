#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
using namespace std;
bool visit[1001];
vector<int>*v;
void dp(int p){
	visit[p]=1;
	printf("%d ",p);
	for(int i=0;i<(int)v[p].size();i++){
		if(!visit[v[p][i]]){
			dp(v[p][i]);
		}
	}
}
int main(void){
	int n,m,s,a,b;
	cin>>n>>m>>s;
	v=new vector<int>[n+1];
	for(int i=0;i<m;i++){
		scanf("%d %d",&a,&b);
		v[a].push_back(b);
		v[b].push_back(a);
	}
	for(int i=1;i<=n;i++)
		sort(v[i].begin(),v[i].end());
	dp(s);
	printf("\n");
	fill(visit,visit+1001,0);
	queue<int>q;
	q.push(s);
	visit[s]=1;
	while(!q.empty()){
		int x=q.front();
		printf("%d ",x);
		q.pop();
		for(int i=0;i<v[x].size();i++){
			if(!visit[v[x][i]]){
				visit[v[x][i]]=1;
				q.push(v[x][i]);
			}
		}
	}
	delete []v;
	return 0;
}