#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(void){
	int n,m,t;
	scanf("%d",&n);
	vector<int>v(n);
	for(int i=0;i<n;i++)scanf("%d",&v[i]);
	sort(v.begin(),v.end());
	scanf("%d",&m);
	for(int i=0;i<m;i++){
		scanf("%d",&t);
		if(binary_search(v.begin(),v.end(),t)) printf("1 ");
		else printf("0 ");
	}
	return 0;
}