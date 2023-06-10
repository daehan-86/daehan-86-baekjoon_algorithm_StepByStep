#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
int main(void){
	int n,m;
	scanf("%d %d",&n,&m);
	vector<string>v(n),result;
	string s;
	for(int i=0;i<n;i++)cin>>v[i];
	sort(v.begin(),v.end());
	for(int i=0;i<m;i++){
		cin>>s;
		if(binary_search(v.begin(),v.end(),s)) result.push_back(s);
	}
	printf("%d\n",result.size());
	sort(result.begin(),result.end());
	for(auto a:result) cout<<a<<"\n";
	return 0;
}