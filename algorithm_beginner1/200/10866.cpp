#include<iostream>
#include<deque>
#include<string>
using namespace std;

int main(void){
	int n,k;
	string s;
	deque<int>q;
	cin>>n;
	while(n--){
		cin>>s;
		if(!s.compare("push_front")){
			cin>>k;
			q.push_front(k);
		}
		else if(!s.compare("push_back")){
			cin>>k;
			q.push_back(k);
		}
		else if(!s.compare("pop_front")){
			if(q.empty()) cout<<"-1\n";
			else{
				cout<<q.front()<<"\n";
				q.pop_front();
			}
		}
		else if(!s.compare("pop_back")){
			if(q.empty())cout<<"-1\n";
			else{
				cout<<q.back()<<"\n";
				q.pop_back();
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