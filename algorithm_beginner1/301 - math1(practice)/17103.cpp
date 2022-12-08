#include<iostream>
using namespace std;
bool prime[1000001]={1,1};
int main(void){
	for(int i=2;i<1000001;i++){
		if(!prime[i]){
			for(int j=2;j*i<1000001;j++){
				prime[i*j]=1;
			}
		}
	}
	int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		if(n==4){
			printf("1\n");
			continue;
		}
		int cnt=0;
		for(int i=n-1;i>=n/2;i-=2){
			if(!prime[i]&&!prime[n-i]){
				cnt++;
			}
		}
		printf("%d\n",cnt);
	}
	return 0;
}