#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int res,resn;
vector<pair<int,int>>v[10001];
bool visit[10001];
void dp(int x,int d){
	bool state=1;
	for(int i=0;i<(int)v[x].size();i++){
		pair<int,int> &t=v[x][i];
		if(!visit[t.first]){
			state=0;
			visit[t.first]=1;
			dp(t.first,d+t.second);
		}
	}
	if(state){
		if(res<d){
			resn=x;
			res=d;
		}
	}
}
int main(void){
	int n,k,a,b;
	cin>>n;
	for(int i=1;i<n;i++){
		scanf("%d %d %d",&k,&a,&b);
		v[k].push_back({a,b});
		v[a].push_back({k,b});
	}
	visit[1]=1;
	dp(1,0);
	fill(visit,visit+10001,0);
	res=0;
	visit[resn]=1;
	dp(resn,0);
	cout<<res;
	return 0;
}