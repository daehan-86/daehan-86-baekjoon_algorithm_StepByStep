#include<iostream>
using namespace std;
long long a[2][2]={{1,1},{1,0}},n;
void mat(long long (*res)[2],long long (*t)[2]){
	long long tem[2][2]={0,};
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			for(int k=0;k<2;k++){
				tem[i][j]+=(res[i][k]*t[k][j])%1000000007;
				tem[i][j]=(tem[i][j]+1000000007)%1000000007;
			}
		}
	}
	for(int i=0;i<2;i++)
		for(int j=0;j<2;j++)
			res[i][j]=tem[i][j];
}
int main(void){
	cin>>n;
	long long b[2][2]={{1,0},{0,0}},res[2][2]={{1,0},{0,1}};
	while(n){
		if(n&1)mat(res,a);
		mat(a,a);
		n/=2;
	}
	mat(res,b);
	printf("%lld",res[0][0]*res[1][0]%1000000007);
	return 0;
}