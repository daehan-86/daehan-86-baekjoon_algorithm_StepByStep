#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<map>
using namespace std;
vector<string>v;
map<string,int>ma;
bool comp(string a,string b){
	auto x=ma.find(a),y=ma.find(b);
	if(x->second!=y->second) return x->second>y->second;
	if(a.length()!=b.length()) return a.length()>b.length();
	return a<b;
}
int main(void){
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int n,m;
	string s;
	cin>>n>>m;
	while(n--){
		cin>>s;
		if(s.length()<m) continue;
		auto t=ma.find(s);
		if(t==ma.end()){ma.insert({s,1});v.push_back(s);}
		else ma[s]++;
	}
	sort(v.begin(),v.end(),comp);
	for(int i=0;i<v.size();i++) cout<<v[i]<<"\n";
	return 0;
}