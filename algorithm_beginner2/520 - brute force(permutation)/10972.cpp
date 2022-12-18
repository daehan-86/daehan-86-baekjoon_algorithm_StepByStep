#include<iostream>
#include<algorithm>
using namespace std;
int v[10001];
int main(void){
	int n;
	cin>>n;
	for(int i=0;i<n;i++)scanf("%d",v+i);
	if(next_permutation(v,v+n)){
		for(int i=0;i<n;i++) printf("%d ",v[i]);
	}
	else printf("-1");
	return 0;
}