#include<iostream>
using namespace std;

int main(void){
	cin.tie(0);
	ios::sync_with_stdio(0);
	int a,b;
	while(1){
		cin>>a>>b;
		if(!a&&!b)break;
		cout<<(a>b?"Yes":"No")<<"\n";
	}
	return 0;
}