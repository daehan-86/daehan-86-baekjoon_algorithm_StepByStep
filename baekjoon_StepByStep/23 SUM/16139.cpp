#include<iostream>
#include<string>
using namespace std;
string s;
int a[200001][26],n,l,r;
char c;
int main(void){
	cin.tie(0);
	ios::sync_with_stdio(0);
	cin>>s;
	for(int i=0;i<s.length();i++){
		if(i) for(int j=0;j<26;j++) a[i][j]=a[i-1][j];
		a[i][s[i]-'a']++;
	}
	cin>>n;
	while(n--){
		cin>>c>>l>>r;
		cout<<a[r][c-'a']-(l!=0?a[l-1][c-'a']:0)<<"\n";
	}
	return 0;
}