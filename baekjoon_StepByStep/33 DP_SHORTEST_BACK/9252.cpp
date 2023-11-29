#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
string a,b,res;
int x,y;
int dp[1001][1001];
int main(void){
	cin.tie(0);
	ios::sync_with_stdio(0);
	cin>>a>>b;
	x=a.length();
	y=b.length();
	for(int i=1;i<=x;i++){
		for(int j=1;j<=y;j++){
			if(a[i-1]==b[j-1]) dp[i][j]=dp[i-1][j-1]+1;
			else dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
		}
	}
	cout<<dp[x][y]<<"\n";
	while(dp[x][y]){
		if(dp[x][y]==dp[x-1][y])x--;
		else if(dp[x][y]==dp[x][y-1])y--;
		else{
			res.push_back(a[x-1]);
			x--;
			y--;
		}
	}
	reverse(res.begin(),res.end());
	cout<<res;
	return 0;
}