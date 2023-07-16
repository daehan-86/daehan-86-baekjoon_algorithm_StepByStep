#include<iostream>
#include<string>
using namespace std;
typedef long long ll;
string cache[19][1<<10];
int main(void){
	fill(cache[0],cache[19],INF);
	ll n,k;
	cin>>n>>k;
	for(int i=1;i<10;i++){
		int t=1<<i;
		cache[1][t]=to_string(i);
	}
	for(int i=1;i<18;i++){
		for(int j=0;j<(1<<10);j++){
			if(cache[i][j]){
				cache[i+1][j]=
			}
		}
	}
	return 0;
}