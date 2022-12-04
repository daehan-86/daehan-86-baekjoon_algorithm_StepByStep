#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;
vector<string> v;
int main(void){
	string s;
	cin>>s;
	for(int i=0;i<s.length();i++){
		v.push_back(s.substr(i,s.length()-i));
	}
	sort(v.begin(),v.end());
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<"\n";
	}
	return 0;
}