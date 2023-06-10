#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(void){
	int n,k;
	scanf("%d %d",&n,&k);
	vector<int>v(n);
	for(int i=0;i<n;i++) scanf("%d",&v[i]);
	sort(v.begin(),v.end());
	printf("%d",v[n-k]);
	return 0;
}