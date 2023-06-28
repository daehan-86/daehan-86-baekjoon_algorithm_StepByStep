#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
bool comp(string a,string b){
	string s1=a+b,s2=b+a;
	for(int i=0;i<s1.length();i++){
		if(s1[i]!=s2[i]) return s1[i]>s2[i];
	}
	return 0;
}
int main(void){
	cin.tie(0);
	ios::sync_with_stdio(0);
	int n;
	cin>>n;
	string res;
	vector<string>v(n);
	for(int i=0;i<n;i++)cin>>v[i];
	sort(v.begin(),v.end(),comp);
	for(int i=0;i<n;i++)res+=v[i];
	int i;
	for(i=0;i<res.length();i++){
		if(res[i]!='0')break;
	}
	if(i==res.length())cout<<"0";
	else cout<<res;
	return 0;
}