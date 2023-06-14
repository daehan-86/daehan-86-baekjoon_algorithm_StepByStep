#include<iostream>
#include<string>
#include<deque>
using namespace std;

int main(void){
	int t,n,x;
	string s,as;
	cin>>t;
	while(t--){
		cin>>s>>n>>as;
		deque<int>d;
		int k=1;
		for(int i=0;i<n;i++){
			int l=k;
			while(as[l]!=','&&as[l]!=']')l++;
			d.push_back(stoi(as.substr(k,l-k)));
			k=l+1;
		}
		bool state=1,ss=1;
		for(int i=0;i<s.length();i++){
			if(s[i]=='R') state=!state;
			else{
				if(d.empty()) {ss=0;break;}
				if(state) d.pop_front();
				else d.pop_back();
			}
		}
		if(ss){
			printf("[");
			if(!d.empty()){
				printf("%d",state?d.front():d.back());
				state?d.pop_front():d.pop_back();
			}
			while(!d.empty()){
				printf(",%d",state?d.front():d.back());
				state?d.pop_front():d.pop_back();
			}
			printf("]\n");
		}
		else printf("error\n");
	}
	return 0;
}