#include<iostream>
#include<vector>
using namespace std;
vector<int>v;
vector<int>tmp;
int c,k,result=-1;
void merge(int p,int q,int r){
	int i=p,j=q+1,t=0;
	while(i<=q&&j<=r){
		if(v[i]<=v[j]) tmp[t++]=v[i++];
		else tmp[t++]=v[j++];
	}
	while(i<=q)tmp[t++]=v[i++];
	while(j<=r)tmp[t++]=v[j++];
	i=p;t=0;
	while(i<=r){
		v[i++]=tmp[t++];
		c++;
		if(c==k)
			result = v[i-1];
	}
}
void merge_sort(int p,int r){
	if(p<r){
		int q=(p+r)/2;
		merge_sort(p,q);
		merge_sort(q+1,r);
		merge(p,q,r);
	}
}
int main(void){
	int n;
	cin>>n>>k;
	v=vector<int>(n);
	tmp=vector<int>(n);
	for(int i=0;i<n;i++) scanf("%d",&v[i]);
	merge_sort(0,n-1);
	cout<<result;
	return 0;
}