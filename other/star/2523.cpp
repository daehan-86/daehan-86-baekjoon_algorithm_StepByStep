#include<iostream>
#include<cmath>
using namespace std;

int main(void){
	int n;
	cin>>n;
	for(int i=1;i<2*n;i++){
		for(int j=0;j<n-abs(i-n);j++) cout<<"*";
		cout<<"\n";
	}
	return 0;
}