#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;
int n,k,t,m;
vector<string>v;
string s;
bool cmp(string a,string b){
	string s1=a+b,s2=b+a;
	for(int i=0;i<s1.length();i++)
		if(s1[i]!=s2[i]) return s1[i]>s2[i];
	return 0;
}
int main(void){
	cin.tie(0);
	ios::sync_with_stdio(0);
	cin>>n>>k;
	for(int i=0;i<n;i++){
		cin>>t;
		m=max(m,t);
		v.push_back(to_string(t));
	}
	for(int i=0;i<k-n;i++) v.push_back(to_string(m));
	sort(v.begin(),v.end(),cmp);
	for(int i=0;i<v.size();i++) cout<<v[i];
	return 0;
}