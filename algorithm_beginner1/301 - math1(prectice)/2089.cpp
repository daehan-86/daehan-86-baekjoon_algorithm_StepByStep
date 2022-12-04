#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(void){
	int n;
	cin>>n;
	string s;
	if(!n) cout<<'0';
	else{
		while(n!=0){
			if(n%-2==0){
				s.push_back('0');
				n/=-2;
			}
			else{
				s.push_back('1');
				n=(n-1)/-2;
			}
		}
		reverse(s.begin(),s.end());
		cout<<s;
	}
	return 0;
}