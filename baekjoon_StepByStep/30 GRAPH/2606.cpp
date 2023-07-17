#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int n,m,a,b,x,c=-1;
bool visit[101];
vector<int>v[101];
queue<int>q;
int main(void){
	cin.tie(0);
	ios::sync_with_stdio(0);
	cin>>n>>m;
	while(m--){
		cin>>a>>b;
		v[a].push_back(b);
		v[b].push_back(a);
	}
	q.push(1);
	visit[1]=1;
	while(!q.empty()){
		c++;
		x=q.front();
		q.pop();
		for(int o:v[x]){
			if(!visit[o]){
				visit[o]=1;
				q.push(o);
			}
		}
	}
	cout<<c;
	return 0;
}