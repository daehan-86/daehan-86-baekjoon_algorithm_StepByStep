#include<iostream>
using namespace std;
bool prime[1000001] = {1,1};
int main(void){
	int n,m;
	cin>>n>>m;
	for(int i=2;i<=1000000;i++){
		if(!prime[i]){
			for(int j=2;j*i<=1000000;j++){
				prime[i*j]=1;
			}
		}
	}
	for(int i=n;i<=m;i++){
		if(!prime[i]) printf("%d\n",i);
	}
	return 0;
}