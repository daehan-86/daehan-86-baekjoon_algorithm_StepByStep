#include<iostream>
#include<algorithm>
using namespace std;
int main(void){
	int a[9],sum=0;
	for(int i=0;i<9;i++){
		scanf("%d",a+i);
		sum+=a[i];
	}
	sort(a,a+9);
	for(int i=0;i<9;i++){
		for(int j=0;j<9;j++){
			if(i!=j && a[i]+a[j]==sum-100){
				for(int k=0;k<9;k++){
					if(k!=i&&k!=j)printf("%d\n",a[k]);
				}
				return 0;
			}
		}
	}
	return 0;
}