#include<iostream>
#include<cmath>
using namespace std;

int main(void){
	int n;
	cin>>n;
	for(int i=1;i<2*n;i++){
		for(int j=0;j<n-abs(n-i)-1;j++) cout<<" ";
		for(int j=0;j<2*abs(n-i)+1;j++) cout<<"*";
		cout<<"\n";
	}
	return 0;
}