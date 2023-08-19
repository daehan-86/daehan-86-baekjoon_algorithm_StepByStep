#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int>v1,v2,v3;
int n,a,b,x,y,t,res;
int main(void){
	cin.tie(0);
	ios::sync_with_stdio(0);
	cin>>n>>a>>b;
	while(n--){
		cin>>t;
		if(t>=15)x|=(1<<t);
		else y|=(1<<t);
	}
	if(!x&&!y) res--;
	for(int i=0;i<(b>>15);i++){
		t=(i<<15);
		if((t&x)==x)v1.push_back(t%a);
	}
	for(int i=0;i<(1<<15);i++){
		if((i&y)==y)v2.push_back(i%a);
	}
	for(int i=0;i<=(b&((1<<15)-1));i++){
		if((i&y)==y)v3.push_back(i%a);
	}
	sort(v2.begin(),v2.end());
	sort(v3.begin(),v3.end());
	for(int o:v1){
		t=(a-o)%a;
		res+=upper_bound(v2.begin(),v2.end(),t)-lower_bound(v2.begin(),v2.end(),t);
	}
	t=((b>>15)<<15);
	if((t&x)==x){
		t=(a-(t%a))%a;
		res+=upper_bound(v3.begin(),v3.end(),t)-lower_bound(v3.begin(),v3.end(),t);
	}
	cout<<res;
	return 0;
}