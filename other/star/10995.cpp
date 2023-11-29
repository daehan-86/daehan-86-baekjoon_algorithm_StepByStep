#include<iostream>
using namespace std;

int main(void){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<2*n;j++){
			if((i+j)%2)cout<<" ";
			else cout<<"*";
		}
		cout<<"\n";
	}
	return 0;
}