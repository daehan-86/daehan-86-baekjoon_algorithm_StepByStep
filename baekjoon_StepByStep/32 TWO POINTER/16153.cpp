#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int>v1,v2;
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
	if(b>=(1<<15)){
		for(int i=0;i<min((b>>15)+1,1<<15);i++){
			t=(i<<15);
			if((t&x)==x)v1.push_back(t%a);
		}
		for(int i=0;i<(1<<15);i++){
			if((i&y)==y)v2.push_back(i%a);
		}
	}
	else{
		v1.push_back(0);
		for(int i=0;i<min(b+1,1<<15);i++){
			if((i&y)==y)v2.push_back(i%a);
		}
	}
	//cout<<v1.size()<<" "<<v2.size()<<"\n";
	sort(v2.begin(),v2.end());
	//cout<<v1[0]<<v2[0]<<" ";
	for(int o:v1){
		t=(a-o)%a;
		res+=upper_bound(v2.begin(),v2.end(),t)-lower_bound(v2.begin(),v2.end(),t);
	}
	cout<<res;
	return 0;
}