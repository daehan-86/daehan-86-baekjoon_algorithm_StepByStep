#include<iostream>
using namespace std;
#define INF 10000000
int main(void){
	int n,mi_x=INF,mi_y=INF,ma_x=-1*INF,ma_y=-1*INF,a,b;
	cin>>n;
	for(int i=0;i<n;i++){
		scanf("%d %d",&a,&b);
		mi_x=min(mi_x,a);
		mi_y=min(mi_y,b);
		ma_x=max(ma_x,a);
		ma_y=max(ma_y,b);
	}
	printf("%d",(ma_x-mi_x)*(ma_y-mi_y));
	return 0;
}