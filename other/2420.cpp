#include<iostream>
using namespace std;

int main(void){
	cin.tie(0);
	ios::sync_with_stdio(0);
	long long a,b;
	cin>>a>>b;
	cout<<(a>b?a-b:b-a);
	return 0;
}