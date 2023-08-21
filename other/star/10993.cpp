#include<iostream>
using namespace std;
int h[11],w[11];
void dp(int n,int k){
	if(h[n]==k)for(int i=0;i<w[n];i++)cout<<"*";
	else{
		cout<<"*";
		if(k==1)return;
		if(k>h[n-1]){
			for(int i=0;i<2*(k-h[n-1]-1);i++)cout<<" ";
			dp(n-1,h[n]-k);
			for(int i=0;i<2*(k-h[n-1]-1);i++)cout<<" ";
		}
		else{
			for(int i=0;i<2*k-3;i++)cout<<" ";
		}
		cout<<"*";
	}
}
int main(void){
	int n,s,e;
	cin>>n;
	h[1]=1,w[1]=1;
	for(int i=2;i<=n;i++){
		h[i]=2*h[i-1]+1;
		w[i]=2*w[i-1]+3;
	}
	s=h[n],e=1;
	if(n%2)swap(s,e);
	for(int i=s;(n%2?i<=e:i>=e);i+=(n%2?1:-1)){
		for(int j=0;j<h[n]-i;j++)cout<<" ";
		dp(n,i);
		cout<<"\n";
	}
	return 0;
}