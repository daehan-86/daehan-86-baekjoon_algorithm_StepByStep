#include<iostream>
using namespace std;

int main(void){
	int n,i=1,s=0;
	cin>>n;
	while(i!=0){
		if(i==n)s=1;
		for(int j=0;j<i;j++)cout<<"*";
		for(int j=0;j<n-i;j++)cout<<"  ";
		for(int j=0;j<i;j++)cout<<"*";
		cout<<"\n";
		if(s)i--;
		else i++;
	}
	return 0;
}