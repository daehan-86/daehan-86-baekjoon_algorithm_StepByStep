#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
char num[36];
int main(void){
	for(int i=0;i<36;i++){
		if(i<10) num[i]=i+'0';
		else num[i]=i-10+'A';
	}
	int a,b;
	cin>>a>>b;
	string s;
	while(a){
		s.push_back(num[a%b]);
		a/=b;
	}
	reverse(s.begin(),s.end());
	cout<<s;
	return 0;
}