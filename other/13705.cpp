#include<iostream>
using namespace std;
typedef __float128 Float;
Float d=0.0000000000000000000000001Q;
Float Sin(Float x){
	Float sum=x,res=x,fact=1.0Q,x2=x*x*(-1.0Q);
	for(int i=1;i<100000000;i++){
		fact*=((2*i)*(2*i+1));
		res*=x2;
		sum+=res/fact;
	}
	return sum;
}
int inner(Float x,int a,int b,int c){
	if(a*x+b*Sin(x)-c<d) return -1;
	else if(a*x+b*Sin(x)-c>d) return 1;
	else return 0;
}
int main(void){
	int a,b,c;
	Float f=0,e=200000,cen,x;
	cin>>a>>b>>c;
	while(f<e){
		cen = (f+e)/2;
		if(inner(cen,a,b,c)==-1){
			f=cen + d;
		}
		else if(inner(cen,a,b,c)==1){
			e=cen - d;
		}
		else{
			break;
		}
	}
	printf("%.12Lf",(long double)cen);
	return 0;
}