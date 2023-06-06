#include<iostream>
#include<string>
using namespace std;
string s[5];
int main(void){
	int m=0;
	for(int i=0;i<5;i++){
		cin>>s[i];
		m=max(m,(int)s[i].length());
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<5;j++){
			if(s[j].length()>i){
				printf("%c",s[j][i]);
			}
		}
	}
	return 0;
}