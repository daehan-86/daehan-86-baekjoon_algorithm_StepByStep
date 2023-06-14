#include<iostream>
#include<map>
#include<string>
using namespace std;
map<string,int>m;
int main(void){
	int n;
	bool a,b;
	string s1,s2;
	cin>>n;
	m.insert({"ChongChong",0});
	while(n--){
		cin>>s1>>s2;
		a=(m.find(s1)!=m.end());
		b=(m.find(s2)!=m.end());
		if(a&&!b) m.insert({s2,0});
		else if(!a&&b) m.insert({s1,0});
	}
	cout<<m.size();
	return 0;
}