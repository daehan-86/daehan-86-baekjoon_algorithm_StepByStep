#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int n,v[100001],m=2147483647,a,b,s,e;
int main(void){
	cin.tie(0);
	ios::sync_with_stdio(0);
	cin>>n;
	for(int i=0;i<n;i++)cin>>v[i];
	sort(v,v+n);
	e=n-1;
	while(s<e){
		int x=v[s],y=v[e];
		if(x+y>0) e--;
		else if(x+y<0) s++;
		else {m=0;a=x;b=y;break;}
		if(m>abs(x+y)){
			m=abs(x+y);
			a=x;
			b=y;
		}
	}
	cout<<a<<" "<<b;
	return 0;
}