#include<iostream>
#include<vector>
#include<queue>
using namespace std;
bool visit[1001];
int main(void){
	int n,m,a,b,res=0;
	cin>>n>>m;
	vector<int>v[1001];
	for(int i=0;i<m;i++){
		scanf("%d %d",&a,&b);
		v[a].push_back(b);
		v[b].push_back(a);
	}
	queue<int>q;
	for(int i=1;i<=n;i++){
		if(!visit[i]){
			res++;
			q.push(i);
			visit[i]=1;
			while(!q.empty()){
				int x=q.front();
				q.pop();
				for(int j=0;j<(int)v[x].size();j++){
					int &t = v[x][j];
					if(!visit[t]){
						q.push(t);
						visit[t]=1;
					}
				}
			}
		}
	}
	cout<<res;
	return 0;
}