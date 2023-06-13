#include<iostream>
#include<vector>
using namespace std;
int mp,cache[30001][3001],list[30001],c[30001],visit[30001];
vector<pair<int,int>>item;
int link(int x){
	if(x==list[x])return x;
	else return link(list[x]);
}
int main(void){
	int n,m,x,y;
	scanf("%d %d %d",&n,&m,&mp);
	fill(visit,visit+30001,-1);
	for(int i=1;i<=n;i++){
		list[i]=i;
		scanf("%d",c+i);
	}
	for(int i=0;i<m;i++){
		scanf("%d %d",&x,&y);
		int px=link(x),py=link(y);
		if(px<=py) list[py]=px;
		else list[px]=py;
	}
	for(int i=1;i<=n;i++){
		int &t=visit[link(i)];
		if(t==-1){
			t=item.size();
			item.push_back({1,c[i]});
		}
		else{
			item[t].first++;
			item[t].second+=c[i];
		}
	}
	int k=0;
	for(int i=0;i<item.size();i++){
		for(int j=mp-1;j>=0;j--){
			int w=item[i].first,v=item[i].second;
	//		printf("%d %d %d %d\n",i,j,w,v);
			if(w>j) cache[i+1][j] = cache[i][j];
			else cache[i+1][j] = max(cache[i][j],v+cache[i][j-w]);
			k=max(k,cache[i+1][j]);
		}
	}
	// for(int i=0;i<item.size();i++){
	// 	for(int j=1;j<mp;j++){
	// 		printf("%d ",cache[i+1][j]);
	// 	}
	// 	printf("\n");
	// }
	printf("%d\n",k);
	return 0;
}