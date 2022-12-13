#include<iostream>
using namespace std;
int gcd(int a,int b) {
	while (b!=0) {
		int r=a%b;
		a=b;
		b=r;
	}
	return a;
}
int lcm(int a,int b) {
	return a*b/gcd(a,b);
}
int main(void) {
	int t;
	cin>>t;
	while(t--) {
		int a,b,c,d;
		scanf("%d %d %d %d",&a,&b,&c,&d);
		int cnt=c%(a+1);
		int tmp=c;
		for (int i=0;i<b;i++) {
			int t=tmp%b==0?b:tmp%b;
			if (t==d)
				break;
			tmp=t+a;
			cnt+=a;
		}
		printf("%d\n",(cnt>lcm(a, b))?-1:cnt);
	}
	return 0;
}