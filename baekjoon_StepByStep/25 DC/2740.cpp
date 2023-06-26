#include<iostream>
using namespace std;
int n,m,k,a[100][100],b[100][100],c[100][100];
int main(void){
	cin.tie(0);
	ios::sync_with_stdio(0);
	cin>>n>>m;
	for(int i=0;i<n;i++) for(int j=0;j<m;j++) cin>>a[i][j];
	cin>>m>>k;
	for(int i=0;i<m;i++) for(int j=0;j<k;j++) cin>>b[i][j];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			for(int l=0;l<k;l++){
				c[i][l]+=a[i][j]*b[j][l];
			}
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<k;j++)
			cout<<c[i][j]<<" ";
		cout<<"\n";
	}
	return 0;
}