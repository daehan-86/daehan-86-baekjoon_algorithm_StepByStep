#include<iostream>
#include<vector>
using namespace std;

int main(void){
	int n;
	while(1){
		scanf("%d",&n);
		if(n<0)break;
		vector<int>v;
		int s=0;
		for(int i=1;i<n;i++){
			if(n%i==0){
				v.push_back(i);
				s+=i;
			}
		}
		if(s!=n) printf("%d is NOT perfect.",n);
		else{
			printf("%d = 1",n);
			for(int i=1;i<v.size();i++) printf(" + %d",v[i]);
		}
		printf("\n");
	}
	return 0;
}