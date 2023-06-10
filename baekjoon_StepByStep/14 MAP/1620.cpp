#include<iostream>
#include<unordered_map>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
unordered_map<string,int>m;
int main(void){
	int n,k;
	string s;
	cin>>n>>k;
	vector<string>v(n);
	for(int i=0;i<n;i++){
		cin>>s;
		v[i]=s;
		m.insert({s,i});
	}
	string* result=new string[k];
	for(int i=0;i<k;i++){
		cin>>s;
		if(s[0]<'A') result[i]=v[stoi(s)-1];
		else result[i]=to_string(m.find(s)->second+1);
	}
	for(int i=0;i<k;i++) cout<<result[i]<<"\n";
	return 0;
}