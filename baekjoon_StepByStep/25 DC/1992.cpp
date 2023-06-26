#include<iostream>
#include<string>
using namespace std;
string res,map[65];
void dc(int x,int y,int n){
	char t=map[x][y];
	int k=n/2;
	for(int i=x;i<x+n;i++){
		for(int j=y;j<y+n;j++){
			if(t!=map[i][j]){
				res.push_back('(');
				dc(x,y,k);
				dc(x,y+k,k);
				dc(x+k,y,k);
				dc(x+k,y+k,k);
				res.push_back(')');
				return;
			}
		}
	}
	res.push_back(t);
	return;
}
int n;
int main(void){
	cin.tie(0);
	ios::sync_with_stdio(0);
	cin>>n;
	for(int i=0;i<n;i++)cin>>map[i];
	dc(0,0,n);
	cout<<res;
	return 0;
}