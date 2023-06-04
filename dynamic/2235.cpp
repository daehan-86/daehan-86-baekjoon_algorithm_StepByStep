#include<iostream>
#include<string>
using namespace std;
string s,t;
int main(void){
	while(1){
		cin>>s;
		if(s=="#")break;
		while(1){
			cin>>t;
			if(t=="0")break;
			if(t.size()%2){
				bool state=1;
				for()
			}
			else{
				for(int i=0;i<t.size();i+=2){
					int k=10*(t[i]-'0')+t[i+1]-'0';
					printf("%c",s[k]);
				}
			}
			cout<<"\n";
		}
	}
	return 0;
}