#include<iostream>
#include<queue>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
bool map[26][26];
int n,dir[4][2]={{1,0},{-1,0},{0,1},{0,-1}};
string s;
queue<pair<int,int>>q;
vector<int>v;
bool inner(int x,int y){
	if(x>=0&&x<n&&y>=0&&y<n)return 1;
	return 0;
}
int main(void){
	cin.tie(0);
	ios::sync_with_stdio(0);
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>s;
		for(int j=0;j<s.length();j++)
			map[i][j]=s[j]-'0';
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(map[i][j]){
				q.push({i,j});
				map[i][j]=0;
				int t=0;
				while(!q.empty()){
					int x=q.front().first,y=q.front().second;
					q.pop();
					t++;
					for(int d=0;d<4;d++){
						int dx=x+dir[d][0],dy=y+dir[d][1];
						if(inner(dx,dy)&&map[dx][dy]){
							map[dx][dy]=0;
							q.push({dx,dy});
						}
					}
				}
				v.push_back(t);
			}
		}
	}
	sort(v.begin(),v.end());
	cout<<v.size()<<"\n";
	for(int i=0;i<v.size();i++) cout<<v[i]<<"\n";
	return 0;
}