#include<iostream>
#include<stack>
#include<string>
using namespace std;
int main(void){
	string s;
	int k=0, result=0;
	getline(cin,s);
	stack<bool>st;
	bool state=0;
	for(char c : s){
		if(c=='('){
			st.push(1);
			state=1;
		}
		else{
			st.pop();
			if(state){
				result += st.size();
			}
			else{
				result++;
			}
			state=0;
		}
	}
	cout<<result;
	return 0;
}