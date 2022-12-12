#include<iostream>
#include<string>
#include<math.h>
using namespace std;

int main(void){
	int n;
	long long result=0;
	cin>>n;
	string s=to_string(n);
	for(int i=1;i<s.length();i++) result+=9*i*pow(10,i-1);
	result += s.length()*(n-pow(10,s.length()-1)+1);
	cout<<result;
	return 0;
}