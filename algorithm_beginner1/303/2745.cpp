#include<iostream>
#include<string>
using namespace std;
int main(void){
	string s;
	int b,a=0;
	cin>>s>>b;
	for(int i=0;i<s.length();i++){
		a*=b;
		if(s[i]<='9') a+=s[i]-'0';
		else a+=s[i]-'A'+10;
	}
	cout<<a;
	return 0;
}