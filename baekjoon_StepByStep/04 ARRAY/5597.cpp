#include<iostream>
using namespace std;
bool a[31];
int main(void){
	int t;
	for(int i=0;i<28;i++){
		scanf("%d",&t);
		a[t]=1;
	}
	for(int i=1;i<31;i++)
		if(!a[i]) printf("%d\n",i);
	return 0;
}