/*
#include<iostream>
#include<unordered_map>
#include<algorithm>
using namespace std;
unordered_map<int,int>m;
int main(void){
	int n,k,t;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&t);
		auto a=m.find(t);
		if(a==m.end()) m.insert({t,1});
		else a->second++;
	}
	scanf("%d",&k);
	for(int i=0;i<k;i++){
		scanf("%d",&t);
		auto a=m.find(t);
		if(a==m.end()) printf("0 ");
		else printf("%d ",a->second);
	}
	return 0;
}
*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(void){
	int n,m,k;
	scanf("%d",&n);
	vector<int>v(n);
	for(int i=0;i<n;i++)scanf("%d",&v[i]);
	sort(v.begin(),v.end(),less<>());
	scanf("%d",&m);
	for(int i=0;i<m;i++){
		scanf("%d",&k);
		printf("%d ",upper_bound(v.begin(),v.end(),k)-lower_bound(v.begin(),v.end(),k));
	}
	return 0;
}