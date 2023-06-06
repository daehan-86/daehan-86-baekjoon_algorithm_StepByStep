#include<iostream>
#include<string>
using namespace std;
string s;
int main(void){
	int n;
	cin>>n;
	while(n--){
		cin>>s;
		printf("%c%c\n",s.front(),s.back());
	}
	return 0;
}