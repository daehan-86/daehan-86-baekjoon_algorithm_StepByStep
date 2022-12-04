#include<iostream>
#include<string>
using namespace std;
int cnt[26];
int main(void){
	fill(cnt,cnt+26,-1);
	string s;
	cin>>s;
	for(int i=0;i<s.length();i++){
		if(cnt[s[i]-'a']==-1){
			cnt[s[i]-'a']=i;
		}
	}
	for(int i=0;i<26;i++) printf("%d ",cnt[i]);
	return 0;
}