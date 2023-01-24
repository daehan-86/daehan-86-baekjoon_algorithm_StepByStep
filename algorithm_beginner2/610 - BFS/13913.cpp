#include<iostream>
#include<queue>
#include<algorithm>
using namespace std;
int visit[100001];
queue<pair<int,int>>q;
int main(void){
	int n,m,res;
	cin>>n>>m;
	fill(visit,visit+100001,-1);
	q.push(make_pair(m,0));
	visit[m]=m;
	while(!q.empty()){
		int x=q.front().first,d=q.front().second;
		if(x==n){
			printf("%d\n",d);
			break;
		}
		q.pop();
		if(x>0&&visit[x-1]<0){
			q.push(make_pair(x-1,d+1));
			visit[x-1]=x;
		}
		if((x<=m||x<n)&&visit[x+1]<0){
			q.push(make_pair(x+1,d+1));
			visit[x+1]=x;
		}
		if(x%2==0&&visit[x/2]<0){
			q.push(make_pair(x/2,d+1));
			visit[x/2]=x;
		}
	}
	int t=n;
	while(1){
		printf("%d ",t);
		if(t==m)break;
		t=visit[t];
	}
	return 0;
}