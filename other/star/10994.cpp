// #include<iostream>
// using namespace std;
// void dp(int n,int k){
// 	if(k==1||k==4*n-3)for(int i=0;i<4*n-3;i++)cout<<"*";
// 	else if(k==2||k==4*n-4){
// 		cout<<"*";
// 		for(int i=0;i<4*n-5;i++)cout<<" ";
// 		cout<<"*";
// 	}
// 	else{
// 		cout<<"* ";
// 		dp(n-1,k-2);
// 		cout<<" *";
// 	}
// }
// int main(void){
// 	int n;
// 	cin>>n;
// 	for(int i=1;i<=4*n-3;i++){
// 		dp(n,i);
// 		cout<<"\n";
// 	}
// 	return 0;
// }

#include<iostream>
using namespace std;
int n;
bool is(int x,int y){
	int tx=n-x-1,ty=n-y-1;
	if((x<y&&x<ty)||(tx<y&&tx<ty))return 1;
	else return 0;
}
int main(void){
	cin>>n;
	n=4*n-3;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(is(i,j)) cout<<(i%2?" ":"*");
			else cout<<(j%2?" ":"*");
		}
		cout<<"\n";
	}
	return 0;
}