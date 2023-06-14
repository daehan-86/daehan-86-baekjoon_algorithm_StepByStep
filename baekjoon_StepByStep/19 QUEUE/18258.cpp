#include<iostream>
#include<queue>
#include<string>
using namespace std;
queue<int>q;
int main(void){
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	string s;
	int n;
	cin>>n;
	while(n--){
		cin>>s;
		if(s=="push"){
			int t;
			cin>>t;
			q.push(t);
		}
		else if(s=="pop"){
			if(q.empty()) cout<<"-1\n";
			else {cout<<q.front()<<"\n";q.pop();}
		}
		else if(s=="size")
			cout<<q.size()<<"\n";
		else if(s=="empty")
			cout<<q.empty()<<"\n";
		else if(s=="front"){
			if(q.empty()) cout<<"-1\n";
			else cout<<q.front()<<"\n";
		}
		else if(s=="back")
			if(q.empty()) cout<<"-1\n";
			else cout<<q.back()<<"\n";
	}
	return 0;
}