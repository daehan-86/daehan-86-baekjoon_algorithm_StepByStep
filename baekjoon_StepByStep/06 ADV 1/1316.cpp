#include<iostream>
#include<string>
using namespace std;
bool a[26];
string s;
int main(void){
	int n,c=0;
	cin>>n;
	while(n--){
		cin>>s;
		int t=-1;
		bool state=1;
		fill(a,a+26,0);
		for(int i=0;i<s.length();i++){
			int k=s[i]-'a';
			if(a[k]&&t!=k){
				state=0;
				break;
			}
			else a[k]=1;
			t=k;
		}
		if(state)c++;
	}
	cout<<c;
	return 0;
}