#include<iostream>
#define INF 1000000000;
using namespace std;
int num[3]={15,28,19};
int br[3];
int main(void){
	for(int i=0;i<3;i++)scanf("%d",br+i);
	while(br[0]!=br[1]||br[1]!=br[2]){
		int t=br[0],i;
		for(i=1;i<3;i++){
			if(t<br[i]){
				i--;
				break;
			}else if(t>br[i]){
				break;
			}
			t=br[i];
		}
		if(i!=3){
			br[i]+=num[i];
		}
	}
	cout<<br[0];
	return 0;
}