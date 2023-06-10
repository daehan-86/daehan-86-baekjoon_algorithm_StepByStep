#include<iostream>
#include<string>
#include<vector>
using namespace std;
int a[51][51];
int main(void){
	int n;
	string s;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		cin>>s;
		for(j=0;j<s.length();j--){
			if(s[j]<='9') a[s.length()-j-1][0]=s[j]-'0';
			else a[s.length()-j-1][0]=s[j]-'A'+10;
		}
	}
	return 0;
}