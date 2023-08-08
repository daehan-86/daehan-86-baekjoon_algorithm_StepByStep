#include<iostream>
#include<deque>
using namespace std;
deque<int>d;
int main(void){
	cin.tie(0);
	ios::sync_with_stdio(0);
	int n,t,x;
	cin>>n;
	while(n--){
		cin>>t;
		switch(t){
			case 1:
				cin>>x;
				d.push_front(x);
				break;
			case 2:
				cin>>x;
				d.push_back(x);
				break;
			case 3:
				if(d.empty()) cout<<"-1\n";
				else{
					cout<<d.front()<<"\n";
					d.pop_front();
				}
				break;
			case 4:
				if(d.empty()) cout<<"-1\n";
				else{
					cout<<d.back()<<"\n";
					d.pop_back();
				}
				break;
			case 5:
				cout<<d.size()<<"\n";
				break;
			case 6:
				cout<<d.empty()<<"\n";
				break;
			case 7:
				if(d.empty()) cout<<"-1\n";
				else cout<<d.front()<<"\n";
				break;
			case 8:
				if(d.empty()) cout<<"-1\n";
				else cout<<d.back()<<"\n";
				break;
		}
	}
	return 0;
}