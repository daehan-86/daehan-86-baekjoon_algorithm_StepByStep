#include<iostream>
#include<vector>
#include<queue>
using namespace std;
vector<int>*v;
int main(void){
	int t;
	cin>>t;
	while(t--){
		int n,m,a,b;
		scanf("%d %d",&n,&m);
		v=new vector<int>[n+1];
		int visit[20001]={0};
		bool state=0;
		for(int i=0;i<m;i++){
			scanf("%d %d",&a,&b);
			v[a].push_back(b);
			v[b].push_back(a);
		}
		queue<int>q;
		for(int i=1;i<=n;i++){
			if(!visit[i]){
				q.push(i);
				visit[i]=1;
				while(!q.empty()){
					int x=q.front();
					q.pop();
					for(int j=0;j<(int)v[x].size();j++){
						int &t=v[x][j];
						if(!visit[t]){
							visit[t]=(visit[x]==1)?2:1;
							q.push(t);
						}
						else if(visit[t]==visit[x]){
							state=1;
							break;
						}
					}
					if(state) break;
				}
				if(state) break;
			}
		}
		if(state) printf("NO\n");
		else printf("YES\n");
		delete []v;
	}
	return 0;
}