#include<iostream>
#include<string>
using namespace std;
int cnt[26];
int main(void){
	string s;
	cin>>s;
	for(int i=0;i<s.length();i++){
		cnt[s[i]-'a']++;
	}
	for(int i=0;i<26;i++) printf("%d ",cnt[i]);
	return 0;
}