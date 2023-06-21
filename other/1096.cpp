#include<iostream>
#include<set>
using namespace std;
set<int> bx,by;
int map[12][12],bit[12][12];
void paper(int d,int n,bool state){
	for(int i=0;i<n;i++){
		if(state) by.insert(bit[d][i]);
		else bx.insert(bit[d][i]);
	}
	for(int i=1;i<n;i++){
		fill(bit[d+1],bit[d+2],0);
		for(int j=0;j<n;j++){
			if(j<i)bit[d+1][i-j-1]|=bit[d][j];
			else bit[d+1][j-i]|=bit[d][j];
		}
		paper(d+1,max(i,n-i),state);
	}
}
int main(void){
	int n,m,res=-999999999;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		bit[0][i]=1<<i;
		for(int j=0;j<m;j++)
			scanf("%d",map[i]+j);
	}
	paper(0,n,0);
	for(int i=0;i<m;i++) bit[0][i]=1<<i;
	paper(0,m,1);
	for(int a:bx){
		int t[12]={0,};
		for(int i=0;i<n;i++)
			if(a&(1<<i))
				for(int j=0;j<m;j++)
					t[j]+=map[i][j];
		for(int b:by){
			int k=0;
			for(int i=0;i<m;i++)
				if(b&(1<<i))
					k+=t[i];
			res=max(res,k);
		}
	}
	cout<<res;
	return 0;
}