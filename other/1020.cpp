#include<iostream>
#include<string>
#include<algorithm>
#include<math.h>
#define INF 99999999999999999
using namespace std;
long long cache[16][106][2],sn=0;
int line[10]={6, 2, 5, 5, 4, 5, 6, 3, 7, 5},n;
string s;
int main(void){
	cin>>s;
	n=s.length();
	fill(cache[0][0],cache[16][0],INF);
	int sum=0;
	for(int i=0;i<n;i++){
		sn*=10;
		sn+=s[i]-'0';
		sum+=line[sn%10];
	}
	cache[0][0][0]=0;
	for(int i=0;i<n;i++){
		long long t=pow(10,i);
		for(int j=0;j<=sum;j++){
			if(cache[i][j][0]!=INF){
				for(int k=0;k<10;k++){
					if(j+line[k]<=sum){
						cache[i+1][j+line[k]][0]=min(cache[i+1][j+line[k]][0],cache[i][j][0]+k*t);
						if(k>s[n-i-1]-'0'){
							cache[i+1][j+line[k]][1]=min(cache[i+1][j+line[k]][1],cache[i][j][0]+k*t);
						}
					}
				}
			}
			if(cache[i][j][1]!=INF){
				if(j+line[s[n-i-1]-'0']<=sum){
					cache[i+1][j+line[s[n-i-1]-'0']][1]=min(cache[i+1][j+line[s[n-i-1]-'0']][1],cache[i][j][1]+(s[n-i-1]-'0')*t);
				}
			}
		}
	}
	long long res = cache[n][sum][1]!=INF?cache[n][sum][1]:cache[n][sum][0];
	res-=sn;
	if(res<=0) res+=(long long)pow(10,n);
	cout<<res;
	return 0;
}