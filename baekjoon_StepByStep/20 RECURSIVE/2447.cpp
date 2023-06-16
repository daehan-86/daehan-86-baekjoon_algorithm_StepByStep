#include<iostream>
#include<cmath>
using namespace std;
bool map[6561][6561];
void dp(int x,int y,int n,bool state){
	if(n==1){map[x][y]=state;return;}
	int t=n/3;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			if(i==1&&j==1)dp(x+i*t,y+j*t,t,0);
			else dp(x+i*t,y+j*t,t,state);
		}
	}
}
int main(void){
	int n;
	cin>>n;
	dp(0,0,n,1);
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++)
			cout<<(map[i][j]?'*':' ');
		cout<<"\n";
	}
	return 0;
}