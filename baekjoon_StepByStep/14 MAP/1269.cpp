#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(void){
	int n,m,t,c=0;
	scanf("%d %d",&n,&m);
	vector<int>v(n);
	for(int i=0;i<n;i++) scanf("%d",&v[i]);
	sort(v.begin(),v.end());
	for(int i=0;i<m;i++){
		scanf("%d",&t);
		if(binary_search(v.begin(),v.end(),t)) c++;
	}
	printf("%d",n+m-2*c);
	return 0;
}