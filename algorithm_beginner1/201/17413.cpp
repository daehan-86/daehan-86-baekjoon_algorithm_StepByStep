#include<iostream>
#include<stack>
#include<string>
using namespace std;
int main(void){
	stack<char>s;
	string st;
	getline(cin,st);
	int state=0;
	for(char c : st){
		if(state){
			if(c=='<')state++;
			else if(c=='>')state--;
			printf("%c",c);
		}
		else {
			if(c==' '){
				while(!s.empty()){
					printf("%c",s.top());
					s.pop();
				}
				printf(" ");
			}
			else if(c=='<'){
				while(!s.empty()){
					printf("%c",s.top());
					s.pop();
				}
				printf("%c",c);
				state++;
			}
			else s.push(c);
		}
	}
	while(!s.empty()){
		printf("%c",s.top());
		s.pop();
	}
	return 0;
}