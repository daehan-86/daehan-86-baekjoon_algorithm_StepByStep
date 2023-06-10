#include<iostream>
#include<unordered_map>
#include<string>
using namespace std;
unordered_map<string,bool>m;
int main(void){
	string s,t;
	cin>>s;
	for(int i=0;i<s.length();i++){
		for(int j=1;i+j<=s.length();j++){
			t=s.substr(i,j);
			if(m.find(t)==m.end()) m.insert({t,0});
		}
	}
	printf("%d",m.size());
	return 0;
}