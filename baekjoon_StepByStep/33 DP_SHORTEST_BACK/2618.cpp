#include<iostream>
#include<cmath>
using namespace std;
int n,m,cache[1001][1001],map[1001][2];
int dis(int &a,int &b){
	if(a==-1) return map[b][0]+map[b][1]-2;
	else if(a==-2) return 2*n-map[b][0]-map[b][1];
	else return abs(map[a][0]-map[b][0])+abs(map[a][1]-map[b][1]);
}
int dp(int a,int b){
	if(a==m||b==m) return 0;
	int &ret=cache[a][b];
	if(ret!=-1) return ret;
	int next=max(a,b)+1;
	int x=dis(a,next),y=dis(b,next);
	ret=min(dp(a,next)+y,dp(next,b)+x);
	return ret;
}
int main(void){
	cin.tie(0);
	ios::sync_with_stdio(0);
	cin>>n>>m;
	for(int i=0;i<m;i++)cin>>map[i][0]>>map[i][1];
	cout<<dp(-1,-2);
	return 0;
}