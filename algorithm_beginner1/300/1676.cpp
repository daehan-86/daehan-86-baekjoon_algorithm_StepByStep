#include<iostream>
using namespace std;
int tf[501][2];
void cnt(int n){
	int t=n;
	while(!(t%2)){
		t/=2;
		tf[n][0]++;
	}
	t=n;
	while(!(t%5)){
		t/=5;
		tf[n][1]++;
	}
}
int main(void){
	int n,t=0,f=0;
	cin>>n;
	for(int i=1;i<=500;i++) cnt(i);
	for(int i=1;i<=n;i++){
		t+=tf[i][0];
		f+=tf[i][1];
	}
	cout<<min(t,f);
	return 0;
}