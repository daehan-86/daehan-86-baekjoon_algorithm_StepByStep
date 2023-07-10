#include<iostream>
#define INF 15000
using namespace std;
bool visit[31][2*INF+1];
int n,m,t;
int main(void){
	cin.tie(0);
	ios::sync_with_stdio(0);
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>t;
		if(i){
			for(int j=0;j<2*INF+1;j++){
				if(visit[i-1][j]){
					visit[i][j]=1;
					visit[i][j-t]=1;
					visit[i][j+t]=1;
				}
			}
		}
		visit[i][t+INF]=1;
		visit[i][INF-t]=1;
	}
	cin>>m;
	while(m--){
		cin>>t;
		if(t>INF||t<-1*INF) cout<<"N ";
		else{
			cout<<(visit[n-1][t+INF]?"Y ":"N ");
		}
	}
	return 0;
}