#include<iostream>
#include<queue>
#include<vector>
using namespace std;
int n,m,a,b,visit[20001];
int main(void){
	cin.tie(0);
	ios::sync_with_stdio(0);
	int t;
	cin>>t;
	while(t--){
		fill(visit,visit+20001,0);
		cin>>n>>m;
		vector<int>v[n+1];
		queue<int>q;
		for(int i=0;i<m;i++){
			cin>>a>>b;
			v[a].push_back(b);
			v[b].push_back(a);
		}
		bool state=0;
		for(int s=1;s<=n;s++){
			if(!visit[s]){
				q.push(s);
				visit[s]=1;
				while(!q.empty()){
					int x=q.front();
					q.pop();
					for(int i=0;i<v[x].size();i++){
						int &p=v[x][i];
						if(!visit[p]){
							visit[p]=(int)(visit[x]==1)+1;
							q.push(p);
						}
						else if(visit[p]==visit[x])state=1;
						if(state) break;
					}
					if(state)break;
				}
				if(state)break;
			}
		}
		if(state) cout<<"NO\n";
		else cout<<"YES\n";
	}
	return 0;
}