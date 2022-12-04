#include<iostream>
#include<string>
using namespace std;
int main(void){
	string s;
	while(getline(cin,s)){
		int cnt[4]={0};
		for(int i=0;i<s.length();i++){
			if(s[i]>='a'&&s[i]<='z') cnt[0]++;
			else if(s[i]>='A'&&s[i]<='Z') cnt[1]++;
			else if(s[i]==' ') cnt[3]++;
			else cnt[2]++;
		}
		for(int i=0;i<4;i++) printf("%d ",cnt[i]);
		printf("\n");
	}
	return 0;
}