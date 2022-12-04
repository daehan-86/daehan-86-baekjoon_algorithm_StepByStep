#include<iostream>
#include<string>
using namespace std;
int main(void){
	int a,b,c,d;
	scanf("%d %d %d %d",&a,&b,&c,&d);
	string A=to_string(a),B=to_string(b),C=to_string(c),D=to_string(d);
	string x=A+B,y=C+D;
	cout<<stoll(x)+stoll(y);
	return 0;
}