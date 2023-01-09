#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;
bool visit[100001];
int arr[100001];
int main(void){
	int n,a,b;
	cin>>n;
	vector<int>*v=new vector<int>[n+1];
	v[1].push_back(1);
	for(int i=1;i<n;i++){
		scanf("%d %d",&a,&b);
		v[a].push_back(b);
		v[b].push_back(a);
	}
	for(int i=1;i<=n;i++) scanf("%d",arr+i);
	if(arr[1]==1){
		queue<int>q;
		q.push(1);
		int k=2;
		while(!q.empty()){
			int x=q.front();
			printf("%d\n",x);
			q.pop();
			for(int i=1;i<(int)v[x].size();i++,k++){
				auto it=find(v[x].begin(),v[x].end(),arr[k]);
				printf("%d %d\n",k,arr[k]);
				if(it==v[x].end()){
					printf("0");
					return 0;
				}
				else{
					q.push(arr[k]);
				}
			}
		}
		printf("1");
		return 0;
	}
	printf("0");
	return 0;
}