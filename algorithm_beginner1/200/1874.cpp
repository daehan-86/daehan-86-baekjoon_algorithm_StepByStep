#include<iostream>
#include<stack>
#include<vector>
using namespace std;

int main(void){
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n,k,t=1;
	vector<char>v;
	stack<int>s;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>k;
		if(s.empty()){
			s.push(t++);
			v.push_back('+');
		}
		if(s.top()<k){
			for(;t<=k;t++){
				s.push(t);
				v.push_back('+');
			}
		}
		if(s.top()==k){
			s.pop();
			v.push_back('-');
		}
		else{
			printf("NO");
			return 0;
		}
	}
	for(int i=0;i<(int)v.size();i++) printf("%c\n",v[i]);
	return 0;
}