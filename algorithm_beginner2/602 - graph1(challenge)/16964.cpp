#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int>*v;
int c=1,arr[100001];
bool dp(int x,int s){
	c++;
	for(int i=0;i<s;i++){
		auto it=find(v[x].begin(),v[x].end(),arr[c]);
		if(it==v[x].end()){
			return 0;
		}
		else{
			if(dp(arr[c],(int)v[arr[c]].size()-1)) continue;
			return 0;
		}
	}
	return 1;
}
int main(void){
	int n,a,b;
	cin>>n;
	v=new vector<int>[n+1];
	for(int i=1;i<n;i++){
		scanf("%d %d",&a,&b);
		v[a].push_back(b);
		v[b].push_back(a);
	}
	for(int i=1;i<=n;i++) scanf("%d",arr+i);
	cout<<dp(1,v[1].size());
	return 0;
}