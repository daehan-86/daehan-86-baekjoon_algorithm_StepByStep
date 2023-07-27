#include<iostream>
#include<string>
using namespace std;

int main(void){
	string a,b;
	cin>>a>>b;
	cout<<(a.length()<b.length()?"no":"go");
	return 0;
}