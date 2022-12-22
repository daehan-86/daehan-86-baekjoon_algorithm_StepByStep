#include<iostream>
#include<math.h>
using namespace std;
int n,a[21][21],result=999999999;
bool visit[1<<20];
void br(int p,int b){
	if(b!=0&&b!=(1<<n)-1){
		int t[2]={0};
		for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++){
				if(!(b&(1<<i))==!(b&(1<<j))){
					t[!(b&(1<<i))]+=a[i][j];
				}
			}
		}
		result=min(result,abs(t[0]-t[1]));
	}
	for(int i=p;i<n;i++){
		if(!visit[b|(1<<i)]){
			visit[b|(1<<i)]=1;
			br(i+1,b|(1<<i));
		}
	}
}
int main(void){
	cin>>n;
	int t;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&t);
			a[i][j]+=t;
			a[j][i]+=t;
		}
	}
	br(0,0);
	cout<<result;
	return 0;
}