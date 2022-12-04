//미해결
#include<iostream>
#include<math.h>
using namespace std;
__float128 myround(__float128 n)
{
    n*=10000000;
	if(((int)n)%10<5)n-=((int)n)%10;
	else{
		n+=10;
		n-=((int)n)%10;
	}
	return n/10000000;
}
__float128 mysin(__float128 x)
{
      __float128 sum = x;
      __float128 result = x;
      __float128 fact = 1.0f;
      __float128 x2 = x*x*-1.0f;;
      for(int i=1;i<9;++i){
            fact *= ((2*i) * (2*i+1));
            result *= x2;
            sum += (result / fact);
      }
      return sum;
}
int inner(__float128 x,int a,int b,int c){
	if(a*x+b*mysin(x)-c<0.000000000000001) return -1;
	else if(a*x+b*mysin(x)-c>0.000000000000001) return 1;
	else return 0;
}
int main(void){
	int a,b,c;
	__float128 f=0,e=200000,cen;
	cin>>a>>b>>c;
	__float128 x;
	while(f<e){
		cen = (f+e)/2;
		if(inner(cen,a,b,c)==-1){
			f=cen + 0.00000000000000001;
		}
		else if(inner(cen,a,b,c)==1){
			e=cen - 0.00000000000000001;
		}
		else{
			break;
		}
	}
	cout<<fixed;
	cout.precision(6);
	cout<<myround(cen);
	return 0;
}