#include<iostream>
using namespace std;
int dp[1001][10]={1,1,1,1,1,1,1,1,1,1};
int main(void){
	int n,result=0;
	cin>>n;
	for(int i=1;i<n;i++){
		for(int j=0;j<10;j++){
			for(int k=0;k<=j;k++){
				dp[i][j]+=dp[i-1][k];
				dp[i][j]%=10007;
			}
		}
	}
	for(int i=0;i<10;i++){
		result +=dp[n-1][i];
	}
	cout<<result%10007;
	return 0;
}