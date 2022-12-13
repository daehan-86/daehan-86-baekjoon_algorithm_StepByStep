#include<iostream>
using namespace std;
int n,m,map[500][500];
void dir(int d,int &x,int &y){
	switch(d){
		case 1:
			y*=-1;
			swap(x,y);
			break;
		case 2:
			x*=-1;
			y*=-1;
			break;
		case 3:
			x*=-1;
			swap(x,y);
			break;
	}
}
bool is_inner(int x,int y){
	if(x>=0&&x<n&&y>=0&&y<=m) return 1;
	return 0;
}
int shape[7][3][2]={{{0,1},{0,2},{0,3}},
					{{0,1},{1,1},{1,0}},
					{{0,1},{0,2},{1,2}},
					{{0,1},{0,2},{-1,2}},
					{{0,1},{1,1},{1,2}},
					{{0,1},{-1,1},{-1,2}},
					{{1,0},{2,0},{1,1}}
					};
int main(void){
	cin>>n>>m;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			scanf("%d",&map[i][j]);
		}
	}
	int result=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			for(int k=0;k<4;k++){
				for(int l=0;l<7;l++){
					int sum = map[i][j];
					for(int h=0;h<3;h++){
						int x=shape[l][h][0],y=shape[l][h][1];
						dir(k,x,y);
						x+=i;
						y+=j;
						if(is_inner(x,y)){
							sum+=map[x][y];
						}
						else{
							sum=-1;
							break;
						}
					}
					if(sum!=-1)result=max(result,sum);
				}
			}
		}
	}
	cout<<result;
	return 0;
}