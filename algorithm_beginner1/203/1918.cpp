#include<iostream>
#include<stack>
#include<string>
using namespace std;

int main(void){
	stack<char>st;
	string s;
	cin>>s;
	for(int i=0;i<(int)s.length();i++){
		if(s[i]>='A'&&s[i]<='Z'){
			printf("%c",s[i]);
		}
		else{
			switch(s[i]){
				case '+':
				case '-':
					if(!st.empty()&&st.top()!='('){
						while(!st.empty()&&st.top()!='('){
							printf("%c",st.top());
							st.pop();
						}
					}
					st.push(s[i]);
					break;
				case '*':
				case '/':
					if (!st.empty()&&st.top()!='('&& st.top()!='+'&&st.top()!='-') {
						while (!st.empty()&&st.top()!='('&&st.top()!='+'&&st.top()!='-') {
							printf("%c", st.top());
							st.pop();
						}
					}
					st.push(s[i]);
					break;
				case '(':
					st.push('(');
					break;
				case ')':
					while(st.top()!='('){
						printf("%c",st.top());
						st.pop();
					}
					st.pop();
					break;
			}
		}
	}
	while(!st.empty()){
		printf("%c",st.top());
		st.pop();
	}
	return 0;
}