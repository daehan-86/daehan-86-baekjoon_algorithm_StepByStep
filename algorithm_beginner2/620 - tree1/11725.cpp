#include<iostream>
#include<vector>
#include<queue>
using namespace std;
vector<int>v[100001];
bool visit[100001];
int res[100001];
queue<int>q;
int main(void){
	int n,a,b;
	cin>>n;
	for(int i=1;i<n;i++){
		scanf("%d %d",&a,&b);
		v[a].push_back(b);
		v[b].push_back(a);
	}
	q.push(1);
	visit[1]=1;
	while(!q.empty()){
		int x=q.front();
		q.pop();
		for(int i=0;i<(int)v[x].size();i++){
			int &t=v[x][i];
			if(!visit[t]){
				visit[t]=1;
				res[t]=x;
				q.push(t);
			}
		}
	}
	for(int i=2;i<=n;i++) printf("%d\n",res[i]);
	return 0;
}