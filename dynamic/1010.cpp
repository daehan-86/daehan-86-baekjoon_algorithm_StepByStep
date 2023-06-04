// C의 특성을 이용한 풀이(내 풀이)
// #include<iostream>
// using namespace std;
// long long cache[31][31];
// long long C(int a,int b){
// 	if(b>a/2)b=a-b;
// 	long long &ret=cache[a][b];
// 	if(!b) ret=1;
// 	if(!ret) ret=C(a-1,b-1)+C(a-1,b);
// 	return ret;
// } 
// int main(void){
// 	int t,n,m;
// 	scanf("%d",&t);
// 	while(t--){
// 		scanf("%d %d",&n,&m);
// 		cout<<C(m,n)<<"\n";
// 	}
// 	return 0;
// }

// 그냥 C 구하기(일반적 풀이)
#include<iostream>
using namespace std;

int main(void){
	int t,n,m;
	scanf("%d",&t);
	while(t--){
		scanf("%d %d",&n,&m);
		long long res=1;
		for(int i=m;i>m-n;i--){
			res*=i;
			res/=m-i+1;
		}
		cout<<res<<"\n";
	}
	return 0;
}