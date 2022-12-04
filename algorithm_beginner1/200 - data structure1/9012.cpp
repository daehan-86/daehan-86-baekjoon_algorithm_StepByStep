#include<iostream>
#include<stack>
#include<string>
using namespace std;

int main(void){
	int t;
	scanf("%d",&t);
	string s;
	stack<int>st;
	while(t--){
		cin>>s;
		bool state=0;
		for(int i=0;i<s.length();i++){
			if(s[i]=='(') st.push(1);
			else{
				if(st.empty()){
					state=1;
					break;
				}
				else{
					st.pop();
				}
			}
		}
		if(state || !st.empty()) printf("NO\n");
		else printf("YES\n");
		while(!st.empty()) st.pop();
	}
	return 0;
}