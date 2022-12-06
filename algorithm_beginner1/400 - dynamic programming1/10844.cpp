#include<iostream>
using namespace std;
int dp[101][10];
int main(void){
	for(int i=1;i<10;i++) dp[1][i]=1;
	for(int i=2;i<101;i++){
		for(int j=0;j<10;j++){
			if(j>0)dp[i][j]+=dp[i-1][j-1];
			if(j<9)dp[i][j]+=dp[i-1][j+1];
			dp[i][j]%=1000000000;
		}
	}
	int n,result=0;
	cin>>n;
	for(int i=0;i<10;i++){
		result +=dp[n][i];
		result %=1000000000;
	}
	cout<<result;
	return 0;
}