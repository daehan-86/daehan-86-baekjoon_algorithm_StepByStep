#include<iostream>
using namespace std;
#define INF 9223372036854775807LL
long long res[501],v[6001][3],n,m;
int main(void){
	cin.tie(0);
	ios::sync_with_stdio(0);
	cin>>n>>m;
	fill(res,res+501,INF);
	for(int i=0;i<m;i++)for(int j=0;j<3;j++)cin>>v[i][j];
	res[1]=0LL;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			long long &s=v[j][0],&t=v[j][1],&d=v[j][2];
			if(res[s]!=INF&&res[t]>res[s]+d){
				res[t]=res[s]+d;
				if(i==n-1){
					cout<<"-1";
					return 0;
				}
			}
		}
	}
	for(int i=2;i<=n;i++) cout<<(res[i]==INF?-1:res[i])<<"\n";
	return 0;
}