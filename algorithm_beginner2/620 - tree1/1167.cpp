#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int res,resn;
vector<pair<int,int>>v[100001];
bool visit[100001];
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
	for(int i=0;i<n;i++){
		scanf("%d",&k);
		while(1){
			scanf("%d",&a);
			if(a==-1) break;
			scanf("%d",&b);
			v[k].push_back({a,b});
		}
	}
	visit[1]=1;
	dp(1,0);
	fill(visit,visit+100001,0);
	res=0;
	visit[resn]=1;
	dp(resn,0);
	cout<<res;
	return 0;
}