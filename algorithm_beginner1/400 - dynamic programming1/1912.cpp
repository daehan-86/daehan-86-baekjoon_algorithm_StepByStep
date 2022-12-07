#include<iostream>
using namespace std;
int main(void){
	int n,sum=0,t,result=-1000000000;
	cin>>n;
	for(int i=0;i<n;i++){
		scanf("%d",&t);
		if(sum>0) sum+=t;
		else sum = t;
		result=max(result,sum);
	}
	cout<<result;
	return 0;
}