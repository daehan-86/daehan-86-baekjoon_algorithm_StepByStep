#include<iostream>
#include<string>
using namespace std;
int a[26]={2,2,2,3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,7,8,8,8,9,9,9,9};
int main(void){
	string s;
	int res=0;
	cin>>s;
	for(int i=0;i<s.length();i++)
		res+=a[s[i]-'A']+1;
	cout<<res;
	return 0;
}