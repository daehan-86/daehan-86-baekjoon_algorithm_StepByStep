#include<iostream>
#include<stack>
using namespace std;
int main(void){
	int a,b,n,t,x=0;
	cin>>a>>b>>n;
	stack<int>s;
	while(n--){
		scanf("%d",&t);
		x*=a;
		x+=t;
	}
	while(x){
		s.push(x%b);
		x/=b;
	}
	while(!s.empty()){
		printf("%d ",s.top());
		s.pop();
	}
}