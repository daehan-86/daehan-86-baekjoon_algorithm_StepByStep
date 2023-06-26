#include<iostream>
#include<cmath>
using namespace std;
int a[1001];
int main(void){
	int t,n;
	cin>>t;
	while(t--){
		scanf("%d",&n);
		int s=0,c=0;
		for(int i=0;i<n;i++){
			scanf("%d",a+i);
			s+=a[i];
		}
		for(int i=0;i<n;i++)
			if(a[i]>s/n)c++;
		printf("%.3lf%\n",round((double)c/n*100000)/1000);
	}
	return 0;
}