#include<iostream>
#include<stack>
#include<string>
using namespace std;
int val[26];
int main(void){
	int n,k;
	double x,y;
	cin>>n;
	string s;
	stack<double>st;
	cin>>s;
	for(int i=0;i<n;i++){
		scanf("%d",val+i);
	}
	for(int i=0;i<(int)s.length();i++){
		if(s[i]>='A'&&s[i]<='Z'){
			st.push(val[s[i]-'A']);
		}
		else{
			x=st.top();
			st.pop();
			y=st.top();
			st.pop();
			switch(s[i]){
				case '+':
					st.push(x+y);
					break;
				case '-':
					st.push(y-x);
					break;
				case '*':
					st.push(x*y);
					break;
				case '/':
					st.push(y/x);
					break;
			}
		}
	}
	printf("%.2f",st.top());
	return 0;
}