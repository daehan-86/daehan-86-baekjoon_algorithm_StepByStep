#include<iostream>
#define INF 4223372036854775807LL
using namespace std;
typedef long long ll;
ll res[401][401],n,m,a,b,c,result=INF;

int main(void){
	cin.tie(0);
	ios::sync_with_stdio(0);
	cin>>n>>m;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			res[i][j]=INF;
			if(i==j)res[i][j]=0;
		}
	}
	for(int i=0;i<m;i++){
		cin>>a>>b>>c;
		res[a-1][b-1]=c;
	}
	for(int k=0;k<n;k++){
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				res[i][j]=min(res[i][j],res[i][k]+res[k][j]);
			}
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i!=j){
				result=min(result,res[i][j]+res[j][i]);
			}
		}
	}
	if(result==INF) cout<<"-1";
	else cout<<result;
	return 0;
}