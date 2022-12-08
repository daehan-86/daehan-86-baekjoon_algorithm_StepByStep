#include<iostream>
#include<vector>
using namespace std;
int gcd(int a,int b){
	if(!b)return a;
	else return gcd(b,a%b);
}
int main(void){
	int t,n,k;
	cin>>t;
	while(t--){
		long long sum=0;
		cin>>n;
		vector<int>v;
		for(int i=0;i<n;i++){
			int k;
			cin>>k;
			for(int j=0;j<v.size();j++){
				sum+=gcd(k,v[j]);
			}
			v.push_back(k);
		}
		printf("%lld\n",sum);
	}
	return 0;
}