#include<iostream>
using namespace std;
long long a[50][50];
int n;
void mat(long long (*res)[50],long long (*t)[50]){
	long long tem[50][50]={0,};
	for(int i=0;i<n*5;i++)
		for(int j=0;j<n*5;j++)
			for(int k=0;k<n*5;k++){
				tem[i][j]+=res[i][k]*t[k][j];
				tem[i][j]%=1000003;
			}
	for(int i=0;i<n*5;i++)
		for(int j=0;j<n*5;j++)
			res[i][j]=tem[i][j];
}
void dp(long long (*res)[50],int t){
	if(t==1){
		for(int i=0;i<n*5;i++)
			for(int j=0;j<n*5;j++)
				res[i][j]=a[i][j];
		return;
	}
	if(t%2){
		dp(res,t-1);
		mat(res,a);
	}
	else{
		dp(res,t/2);
		mat(res,res);
	}
}
int main(void){
	int s,e,t;
	cin>>n>>s>>e>>t;
	s--;e--;
    for (int i = 0; i < n; i++){
        for (int j = 1; j < 5; j++){
            a[i * 5 + j][i * 5 + j - 1] = 1;
        }
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            char w;
            cin >> w;
            w -= '0';
            if (w != 0){
                a[i * 5][j * 5 + w - 1] = 1;
            }
        }
    }
	long long res[50][50]={0,};
	dp(res,t);
	cout<<res[5*s][5*e];
	return 0;
}