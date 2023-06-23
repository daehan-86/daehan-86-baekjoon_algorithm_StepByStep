#include<iostream>
using namespace std;
int n;
int main(void){
	int t,r=-10000,res=-10000;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&t);
		r=max(t,r+t);
		res=max(res,r);
	}
	cout<<res;
	return 0;
}