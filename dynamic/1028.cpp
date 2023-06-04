#include<iostream>
#include<string>
using namespace std;
int n,m,result;
string s[751];
int cache[751][751][]
int main(void){
	scanf("%d %d",&n,&m);
	for(int i=0;i<n;i++)cin>>s[i];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(s[i][j]=='1'){
				result=max(result,dp(i,j,0));
			}
		}
	}
	return 0;
}