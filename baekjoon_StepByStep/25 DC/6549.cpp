#include<iostream>
using namespace std;
typedef long long ll;
ll n,a[100001];
ll dc(int l,int r){
	if(l==r)return a[l];
	int mid=(l+r)/2;
	ll ret=max(dc(l,mid),dc(mid+1,r));
	int dl=mid,dr=mid+1;
	ll h=min(a[dl],a[dr]);
	ret=max(ret,h*2LL);
	while(dl>l||dr<r){
		if(dr<r&&(dl==l||a[dl-1]<a[dr+1])){
			dr++;
			h=min(h,a[dr]);
		}
		else{
			dl--;
			h=min(h,a[dl]);
		}
		ret=max(ret,h*(dr-dl+1));
	}
	return ret;
}
int main(void){
	cin.tie(0);
	ios::sync_with_stdio(0);
	while(1){
		cin>>n;
		if(!n)break;
		for(int i=0;i<n;i++) cin>>a[i];
		cout<<dc(0,n-1)<<"\n";
	}
	return 0;
}