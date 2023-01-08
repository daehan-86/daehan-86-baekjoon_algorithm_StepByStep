#include<iostream>
#include<vector>
using namespace std;
vector<int>*v;
bool visit[3001];
int res[3001];
int find_loop(int p,int x){
	visit[x]=1;
	for(int i=0;i<(int)v[x].size();i++){
		int &t=v[x][i];
		if(p!=t){
			if(visit[t]) return t;
			else{
				int k=find_loop(x,t);
				if(k){
					if(k==x) return 0;
					return k;
				}
			}
		}
	}
	visit[x]=0;
	return 0;
}
int dp(int p,int x){
	if(visit[x])return 0;
	for(int i=0;i<(int)v[x].size();i++){
		int &t=v[x][i];
		if(t!=p){
			int k=dp(x,t)+1;
			if(k>0) return k;
		}
	}
	return -1;
}
int main(void){
	int n,a,b;
	cin>>n;
	v=new vector<int>[n+1];
	for(int i=0;i<n;i++){
		scanf("%d %d",&a,&b);
		v[a].push_back(b);
		v[b].push_back(a);
	}
	find_loop(0,1);
	fill(res,res+n+1,9999);
	for(int i=1;i<=n;i++) res[i]=min(res[i],dp(0,i));
	for(int i=1;i<=n;i++) printf("%d ",res[i]);
	delete[]v;
	return 0;
}