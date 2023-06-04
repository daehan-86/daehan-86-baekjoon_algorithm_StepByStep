#include<iostream>
using namespace std;
int n,a[4]={25,10,5,1};
int main(void){
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=0;i<4;i++){
			printf("%d ",n/a[i]);
			n%=a[i];
		}
		printf("\n");
	}
	return 0;
}