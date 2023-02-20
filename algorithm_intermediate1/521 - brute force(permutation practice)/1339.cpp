#include<iostream>
#include<string>
#include<algorithm>
#include<math.h>
using namespace std;
int alpha[26];
long long v[10];
string s;
int main(void){
	int n,k=0;
	cin>>n;
	fill(alpha,alpha+26,-1);
	for(int i=0;i<n;i++){
		cin>>s;
		for(int j=0;j<(int)s.length();j++){
			if(alpha[s[j]-'A']==-1){
				alpha[s[j]-'A']=k;
				k++;
			}
			v[alpha[s[j]-'A']]+=(long long)pow(10,s.length()-1-j);
		}
	}
	sort(v,v+10,greater<>());
	long long sum=0;
	for(int i=0;i<10;i++){
		sum+=v[i]*(9-i);
	}
	cout<<sum;
	return 0;
}