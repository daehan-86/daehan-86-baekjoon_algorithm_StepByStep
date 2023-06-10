#include<iostream>
#include<string>
using namespace std;
int a[10];
int main(void){
	string s;
	cin>>s;
	for(int i=0;i<s.length();i++) a[s[i]-'0']++;
	for(int i=9;i>=0;i--){
		for(int j=0;j<a[i];j++)printf("%d",i);
	}
}