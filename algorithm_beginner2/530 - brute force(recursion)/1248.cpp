#include<iostream>
#include<string>
using namespace std;
int n;
char v[11][11];
bool isok(int *a,int t,int d){
	int sum=0;
	for(int i=0;i<=d;i++){
		sum+=a[d-i];
		if((sum<0&&v[d-i][d]=='-')||(sum>0&&v[d-i][d]=='+')||(sum==0&&v[d-i][d]=='0'))
			continue;
		return 0;
	}
	return 1;
}
bool br(int *a,int d){
	if(d==n) return 1;
	for(int i=-10;i<=10;i++){
		a[d]=i;
		if(isok(a,i,d)){
			if(br(a,d+1)) return 1;
		}
	}
	return 0;
}
int main(void){
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			cin>>v[i][j];
		}
	}
	int a[11];
	br(a,0);
	for(int i=0;i<n;i++) printf("%d ",a[i]);
	return 0;
}