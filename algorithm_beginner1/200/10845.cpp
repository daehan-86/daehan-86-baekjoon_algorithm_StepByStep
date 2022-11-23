#include<iostream>
#include<queue>
#include<string>
using namespace std;

int main(void){
	int n,k;
	string s;
	queue<int>q;
	cin>>n;
	while(n--){
		cin>>s;
		if(!s.compare("push")){
			cin>>k;
			q.push(k);
		}
		else if(!s.compare("pop")){
			if(q.empty()) cout<<"-1\n";
			else{
				cout<<q.front()<<"\n";
				q.pop();
			}
		}
		else if(!s.compare("size")){
			cout<<q.size()<<"\n";
		}
		else if(!s.compare("empty")){
			cout<<q.empty()<<"\n";
		}
		else if(!s.compare("front")){
			if(q.empty()) cout<<"-1\n";
			else cout<<q.front()<<"\n";
		}
		else if(!s.compare("back")){
			if(q.empty()) cout<<"-1\n";
			else cout<<q.back()<<"\n";
		}
	}
	return 0;
}