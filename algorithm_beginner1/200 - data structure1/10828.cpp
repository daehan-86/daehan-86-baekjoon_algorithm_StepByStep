#include<iostream>
#include<stack>
#include<string>
using namespace std;
int main(void){
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n,t;
	string s="adsf";
	if(s=="asdf") cout<<12;
	stack<int>st;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>s;
		if(!s.compare("push")){
			cin>>t;
			st.push(t);
		} else if(!s.compare("pop")){
			if(st.empty()){
				cout<<"-1\n";
			} else{
				cout<<st.top()<<"\n";
				st.pop();
			}
		} else if(!s.compare("size")){
			cout<<st.size()<<"\n";
		} else if(!s.compare("empty")){
			cout<<st.empty()<<"\n";
		} else if(!s.compare("top")){
			if(st.empty()) cout<<"-1\n";
			else cout<<st.top()<<"\n";
		}
	}
	return 0;
}