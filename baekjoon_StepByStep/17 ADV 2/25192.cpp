#include<iostream>
#include<map>
#include<string>
#include<algorithm>
using namespace std;
map<string,int>m;
int main(void){
	int n,c=0;
	string s;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>s;
		if(s!="ENTER"){
			if(m.find(s)==m.end()) m.insert({s,0});
		}
		else{
			c+=m.size();
			m.clear();
		}
	}
	c+=m.size();
	printf("%d",c);
	return 0;
}