#include<iostream>
#include<string>
#include<math.h>
using namespace std;
int main(void){
	string s;
	cin>>s;
	int k=(s.length()-1)%3,t=0;
	for(int i=0;i<s.length();i++){
		if(s[i]-'0') t+=pow(2,k);
		k--;
		if(k<0){
			k=2;
			printf("%c",t+'0');
			t=0;
		}
	}
}