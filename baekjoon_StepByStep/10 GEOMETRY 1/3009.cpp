#include<iostream>
using namespace std;
int dot[3][2];
int main(void){
	for(int i=0;i<3;i++){
		scanf("%d %d",dot[i],dot[i]+1);
	}
	for(int i=0;i<2;i++){
		int t=dot[0][i]+dot[1][i];
		if(2*dot[0][i]==t) printf("%d ",dot[2][i]);
		else printf("%d ",t-dot[2][i]);
	}
	return 0;
}