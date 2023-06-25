#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<pair<int,int>>v;
int main(void){
	cin.tie(0);
	ios::sync_with_stdio(0);
	int n,a,b,t=0,c=0;
	cin>>n;
	while(n--){
		cin>>a>>b;
		v.push_back({b,a});
	}
	sort(v.begin(),v.end());
	for(auto o:v){
		if(t<=o.second){
			t=o.first;
			c++;
		}
	}
	cout<<c;
	return 0;
}