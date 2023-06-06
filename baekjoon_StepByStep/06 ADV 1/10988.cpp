#include<iostream>
#include<string>
using namespace std;

int main(void){
	string s;
	cin>>s;
	int i=0,j=s.length()-1;
	while(i<j){
		if(s[i]!=s[j]){
			printf("0");
			return 0;
		}
		i++;j--;
	}
	printf("1");
	return 0;
}