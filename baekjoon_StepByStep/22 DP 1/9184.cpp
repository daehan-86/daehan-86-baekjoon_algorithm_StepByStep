#include<iostream>
using namespace std;
int cache[21][21][21];
int w(int a,int b,int c){
	if(a<1||b<1||c<1) return 1;
	if(a>20||b>20||c>20) return w(20,20,20);
	int &ret=cache[a][b][c];
	if(ret) return ret;
	if(a<b&&b<c) return ret=w(a,b,c-1)+w(a,b-1,c-1)-w(a,b-1,c);
	return ret=w(a-1,b,c)+w(a-1,b-1,c)+w(a-1,b,c-1)-w(a-1,b-1,c-1);
}
int main(void){
	int a,b,c;
	while(1){
		scanf("%d %d %d",&a,&b,&c);
		if(a==-1&&b==-1&&c==-1) break;
		printf("w(%d, %d, %d) = %d\n",a,b,c,w(a,b,c));
	}
	return 0;
}