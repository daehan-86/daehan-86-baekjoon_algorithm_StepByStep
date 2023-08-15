#include<iostream>
#include<algorithm>
using namespace std;
int n,t,v[100001];
long long c;
int main(void){
	cin.tie(0);
	ios::sync_with_stdio(0);
	cin>>n;
	for(int i=0;i<n;i++) cin>>v[i];
	cin>>t;
	sort(v,v+n);
	int s=0,e=n-1;
	while(s<e){
		int k=v[s]+v[e];
		if(k>t) e--;
		else{
			s++;
			if(k==t) c++;
		}
	}
	cout<<c;
	return 0;
}