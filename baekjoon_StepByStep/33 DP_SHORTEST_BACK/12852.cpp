#include<iostream>
#include<queue>
using namespace std;
int visit[1000001],n;
queue<pair<int,int>>q;
int main(void){
	cin>>n;
	visit[1]=0;
	q.push({1,0});
	while(!q.empty()){
		int x=q.front().first,c=q.front().second;
		q.pop();
		if(x==n){
			cout<<c<<"\n";
			break;
		}
		if(x*3<=n&&!visit[x*3]){
			visit[x*3]=x;
			q.push({x*3,c+1});
		}
		if(x*2<=n&&!visit[x*2]){
			visit[x*2]=x;
			q.push({2*x,c+1});
		}
		if(x+1<=n&&!visit[x+1]){
			visit[x+1]=x;
			q.push({x+1,c+1});
		}
	}
	cout<<n;
	while(visit[n]){
		cout<<" "<<visit[n];
		n=visit[n];
	}
	return 0;
}