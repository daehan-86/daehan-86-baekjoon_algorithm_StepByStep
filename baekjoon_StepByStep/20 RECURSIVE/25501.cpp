#include<iostream>
#include<string>
using namespace std;
int c;
bool recursion(string &s, int l, int r){
	c++;
    if(l >= r) return 1;
    else if(s[l] != s[r]) return 0;
    else return recursion(s, l+1, r-1);
}

bool isPalindrome(string &s){
    return recursion(s, 0, s.length()-1);
}

int main(){
	int t;
	string s;
	cin>>t;
	while(t--){
		cin>>s;
		c=0;
		bool b=isPalindrome(s);
		printf("%d %d\n",b,c);
	}
	return 0;
}