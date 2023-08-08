#include<iostream>
#include<stack>
using namespace std;
stack<int>s;
int main(void){
	cin.tie(0);
	ios::sync_with_stdio(0);
	int n,x,t;
	cin>>n;
	while(n--){
		cin>>t;
		switch(t){
			case 1:
				cin>>x;
				s.push(x);
				break;
			case 2:
				if(s.empty()) cout<<"-1\n";
				else{
					cout<<s.top()<<"\n";
					s.pop();
				}
				break;
			case 3:
				cout<<s.size()<<"\n";
				break;
			case 4:
				cout<<s.empty()<<"\n";
				break;
			case 5:
				if(s.empty()) cout<<"-1\n";
				else cout<<s.top()<<"\n";
				break;
		}
	}
	return 0;
}