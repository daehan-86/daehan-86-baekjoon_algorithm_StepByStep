#include<iostream>
#include<stack>
using namespace std;
int main(void){
	int t;
	char c;
	stack<char>s;
	scanf("%d",&t);
	scanf("%c",&c);
	while(t--){
		while(1){
			scanf("%c",&c);
			if(c=='\n'||c==' '){
				while(!s.empty()){
					cout<<s.top();
					s.pop();
				}
				cout<<c;
				if(c=='\n') break;
			}
			else s.push(c);
		}
	}
	return 0;
}