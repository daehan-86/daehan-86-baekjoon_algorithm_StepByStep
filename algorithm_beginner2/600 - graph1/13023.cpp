#include<iostream>
#include<vector>
using namespace std;
bool visit[2001];
int n,m;
vector<int>*v;
bool dp(int p,int d){
	if(d==5) return 1;
	for(int i=0;i<(int)v[p].size();i++){
		int &t=v[p][i];
		if(!visit[t]){
			visit[t]=1;
			if(dp(t,d+1)) return 1;
			visit[t]=0;
		}
	}
	return 0;
}
int main(void){
	int a,b;
	cin>>n>>m;
	v=new vector<int>[n];
	for(int i=0;i<m;i++){
		scanf("%d %d",&a,&b);
		v[a].push_back(b);
		v[b].push_back(a);
	}
	for(int i=0;i<n;i++){
		visit[i]=1;
		if(dp(i,1)){printf("1");return 0;}
		visit[i]=0;
	}
	printf("0");
	delete [] v;
	return 0;
}