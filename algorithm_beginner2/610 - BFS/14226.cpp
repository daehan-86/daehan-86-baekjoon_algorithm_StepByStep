#include<iostream>
#include<queue>
#include<tuple>
using namespace std;
bool visit[2001][2001];
queue<tuple<int,int,int>>q;
int main(void){
	int n;
	cin>>n;
	q.push(make_tuple(1,0,0));
	visit[1][0]=1;
	while(!q.empty()){
		int x=get<0>(q.front()),d=get<1>(q.front()),c=get<2>(q.front());
		if(x==n){
			printf("%d",d);
			return 0;
		}
		q.pop();
		if(x>1&&!visit[x-1][c]){
			visit[x-1][c]=1;
			q.push(make_tuple(x-1,d+1,c));
		}
		if(c&&x<n&&!visit[x+c][c]){
			visit[x+c][c]=1;
			q.push(make_tuple(x+c,d+1,c));
		}
		if(x<n&&x!=c){
			c=x;
			q.push(make_tuple(x,d+1,c));
		}
	}
	return 0;
}