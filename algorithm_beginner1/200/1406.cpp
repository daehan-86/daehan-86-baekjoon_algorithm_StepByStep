#include<iostream>
#include<stack>
#include<string>
#include<algorithm>
using namespace std;

int main(void){
	string s;
	cin>>s;
	stack<char>l,r;
	for(int i=0;i<(int)s.length();i++){
		l.push(s[i]);
	}
	int n;
	char c;
	cin>>n;
	while(n--){
		cin>>c;
		switch(c){
			case 'L':
				if(!l.empty()){
					r.push(l.top());
					l.pop();
				}
				break;
			case 'D':
				if(!r.empty()){
					l.push(r.top());
					r.pop();
				}
				break;
			case 'B':
				if(!l.empty()) l.pop();
				break;
			case 'P':
				char t;
				cin>>t;
				l.push(t);
				break;
		}
	}
	s.clear();
	while(!l.empty()){
		s.push_back(l.top());
		l.pop();
	}
	reverse(s.begin(),s.end());
	cout<<s;
	while(!r.empty()){
		printf("%c",r.top());
		r.pop();
	}
}