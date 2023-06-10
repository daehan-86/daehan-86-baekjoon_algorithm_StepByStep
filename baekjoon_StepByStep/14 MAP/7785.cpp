#include<iostream>
#include<map>
#include<algorithm>
#include<string>
using namespace std;
int main(void){
	int n;
	string s,t;
	scanf("%d",&n);
	map<string,int,greater<string>>m;
	for(int i=0;i<n;i++){
		cin>>s>>t;
		if(t=="enter")m.insert({s,1});
		else{
			m.erase(m.find(s));
		}
	}
	for(auto i=m.begin();i!=m.end();i++) cout<<i->first<<"\n";
	return 0;
}