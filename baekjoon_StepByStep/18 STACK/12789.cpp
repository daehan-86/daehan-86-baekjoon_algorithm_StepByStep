#include<iostream>
#include<stack>
using namespace std;
stack<int>s;
int n,t,c=1;
int main(void){
	cin.tie(0);
	ios::sync_with_stdio(0);
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>t;
		if(t==c) c++;
		else {
			if(!s.empty()&&s.top()<t){
				cout<<"Sad";
				return 0;
			}
			s.push(t);
		}
		while(!s.empty()&&s.top()==c){s.pop();c++;}
	}
	cout<<"Nice";
	return 0;
}