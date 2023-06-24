#include<iostream>
#include<string>
using namespace std;
string s;
int sum[2001][2001][2];
int main(void){
	int n,m,k,res=10000000;
	scanf("%d %d %d",&n,&m,&k);
	for(int i=0;i<n;i++){
		cin>>s;
		for(int j=0;j<m;j++){
			for(int l=0;l<2;l++){
				int &t=sum[i][j][l];
				if(s[j]=='B')t+=((i+j)%2)?l:!l;
				else t+=((i+j)%2)?!l:l;
				if(i)t+=sum[i-1][j][l];
				if(j)t+=sum[i][j-1][l];
				if(i&&j)t-=sum[i-1][j-1][l];
				int s=sum[i][j][l];
				if(i>k-1) s-=sum[i-k][j][l];
				if(j>k-1) s-=sum[i][j-k][l];
				if(i>k-1&&j>k-1) s+=sum[i-k][j-k][l];
				if(i>=k-1&&j>=k-1)
					res=min(res,s);
			}
		}
	}
	cout<<res;
	return 0;
}