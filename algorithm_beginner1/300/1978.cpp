#include<iostream>
using namespace std;
bool prime[1001]={1,1};
int main(void){
	int n,t,cnt=0;
	cin>>n;
	for(int i=2;i<=1000;i++){
		if(!prime[i]){
			for(int j=2;j*i<=1000;j++){
				prime[j*i]=1;
			}
		}
	}
	while(n--){
		scanf("%d",&t);
		if(!prime[t]) cnt++;
	}
	cout<<cnt;
}