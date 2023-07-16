#include<iostream>
#include<string>
#include<stack>
#include<algorithm>
using namespace std;
typedef pair<char,int> ci;
string s,b;
stack<ci>st;
int main(void){
	cin.tie(0);
	ios::sync_with_stdio(0);
	cin>>s>>b;
	reverse(s.begin(),s.end());
	reverse(b.begin(),b.end());
	for(int i=0;i<s.length();i++){
		// if(st.empty()) cout<<"0\n";
		// else cout<<st.top().first<<" "<<st.top().second<<"\n";
		char &c=s[i];
		if(st.empty()) st.push({c,c==b[0]});
		else{
			ci t=st.top();
			if(c==b[t.second]) st.push({c,t.second+1});
			else st.push({c,c==b[0]});
		}
		if(st.top().second==b.length())
			for(int i=0;i<b.length();i++)st.pop();
	}
	if(st.empty()) cout<<"FRULA";
	while(!st.empty()){
		cout<<st.top().first;
		st.pop();
	}
	return 0;
}