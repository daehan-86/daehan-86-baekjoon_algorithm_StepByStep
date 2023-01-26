#include<iostream>
#include<vector>
using namespace std;
vector<int>v[100001];
bool visit[100001];
int res[100001];
typedef struct node{
	vector<node*>ch;
	node(int x){
		for(int i=0;i<(int)v[x].size();i++){
			int &t=v[x][i];
			if(!visit[t]){
				visit[t]=1;
				res[t]=x;
				node *k=new node(t);
				ch.push_back(k);
			}
		}
	}
}node;
int main(void){
	int n,a,b;
	cin>>n;
	for(int i=1;i<n;i++){
		scanf("%d %d",&a,&b);
		v[a].push_back(b);
		v[b].push_back(a);
	}
	node *t= new node(1);
	for(int i=2;i<=n;i++) printf("%d\n",res[i]);
	return 0;
}