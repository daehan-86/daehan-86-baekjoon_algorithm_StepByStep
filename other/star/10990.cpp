#include<iostream>
using namespace std;
int main(void){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=0;j<n-i;j++) cout<<" ";
		cout<<"*";
		if(i>1){
			for(int j=0;j<2*i-3;j++) cout<<" ";
			cout<<"*";
		}
		cout<<"\n";
	}
	return 0;
}