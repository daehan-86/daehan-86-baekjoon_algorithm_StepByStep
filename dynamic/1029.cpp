#include<iostream>
#include<string>
using namespace std;
int cache[1<<15][16][10],n,map[16][16];
string s;
int dp(int b,int p,int d){
	int &ret=cache[b][p][d];
	if(ret) return ret;
	ret=1;
	for(int i=1;i<n;i++){
		if(!(b&(1<<i))&&d<=map[p][i]){
			int t=b|(1<<i);
			ret=max(ret,dp(t,i,map[p][i])+1);
		}
	}
	return ret;
}
int main(void){
	cin.tie(0);
	ios::sync_with_stdio(0);
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>s;
		for(int j=0;j<n;j++){
			map[i][j]=s[j]-'0';
		}
	}
	cout<<dp(1,0,0);
	
	return 0;
}