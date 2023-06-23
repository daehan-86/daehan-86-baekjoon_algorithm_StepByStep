#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(void){
	int n,a,b;
	scanf("%d",&n);
	vector<pair<int,int>>v;
	for(int i=0;i<n;i++){
		scanf("%d %d",&a,&b);
		v.push_back({a,b});
	}
	sort(v.begin(),v.end());
	vector<int>t;
	for(int i=0;i<v.size();i++){
		auto k=lower_bound(t.begin(),t.end(),v[i].second);
		if(k!=t.end()){
			*k=v[i].second;
		}
		else{
			t.push_back(v[i].second);
		}
	}
	cout<<n-t.size();
	return 0;
}