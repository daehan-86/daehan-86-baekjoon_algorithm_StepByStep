#include<iostream>
using namespace std;
int map[9][9];
bool box(int x,int y){
	x/=3;y/=3;
	bool v[10]={0,};
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			int &t=map[3*x+i][3*y+j];
			if(t&&v[t])return 0;
			v[t]=1;
		}
	}
	return 1;
}
bool line(int x,int y){
	bool v[10]={0,};
	for(int i=0;i<9;i++){
		int &t=map[x][i];
		if(t&&v[t])return 0;
		v[t]=1;
	}
	fill(v,v+10,0);
	for(int i=0;i<9;i++){
		int &t=map[i][y];
		if(t&&v[t])return 0;
		v[t]=1;
	}
	return 1;
}
bool dp(int x,int y){
	if(x==9) return 1;
	if(map[x][y]) return dp(x+(y+1)/9,(y+1)%9);
	for(int i=1;i<10;i++){
		map[x][y]=i;
		if(box(x,y)&&line(x,y))
			if(dp(x+(y+1)/9,(y+1)%9)) return 1;
	}
	map[x][y]=0;
	return 0;
}
int main(void){
	for(int i=0;i<9;i++){
		for(int j=0;j<9;j++){
			scanf("%d",map[i]+j);
		}
	}
	dp(0,0);
	for(int i=0;i<9;i++){
		for(int j=0;j<9;j++){
			printf("%d ",map[i][j]);
		}
		printf("\n");
	}
	return 0;
}