#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int a[1000001],res[1000001],n,k;
vector<int>v,result;
int main(void){
	cin.tie(0);
	ios::sync_with_stdio(0);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		auto t=lower_bound(v.begin(),v.end(),a[i]);
		res[i]=(int)distance(v.begin(),t);
		if(t==v.end()) v.push_back(a[i]);
		else *t=a[i];
	}
	cout<<v.size()<<"\n";
	k=v.size()-1;
	for(int i=n;i>0;i--){
		if(res[i]==k){
			k--;
			result.push_back(a[i]);
		}
	}
	reverse(result.begin(),result.end());
	for(int o:result)cout<<o<<" ";
	return 0;
}