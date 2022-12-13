#include<iostream>
#include<string>
#include<math.h>
using namespace std;
bool but[10]={1,1,1,1,1,1,1,1,1,1};
bool isok(int n){
	if(n==0){
		if(but[0]) return 1;
		else return 0;
	}
	while(n){
		if(!but[n%10])return 0;
		n/=10;
	}
	return 1;
}
int main(void){
	int n,m,t,result;
	cin>>n>>m;
	string s=to_string(n);
	result = abs(n-100);
	for(int i=0;i<m;i++){
		scanf("%d",&t);
		but[t]=0;
	}
	int i=n;
	while(i>=0&&!isok(i)) i--;
	s=to_string(i);
	if(i>=0) result=min(result,n-i+(int)s.length());
	i=n;
	while(i<=1000000&&!isok(i)) i++;
	s=to_string(i);
	if(i<=1000000) result=min(result,i-n+(int)s.length());
	cout<<result;
	return 0;
}