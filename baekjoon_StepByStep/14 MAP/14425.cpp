#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main(void){
	int n,m,c=0;
	string s;
	scanf("%d %d",&n,&m);
	vector<string>v(n);
	for(int i=0;i<n;i++)cin>>v[i];
	sort(v.begin(),v.end());
	for(int i=0;i<m;i++){
		cin>>s;
		if(binary_search(v.begin(),v.end(),s)) c++;
	}
	printf("%d",c);
	return 0;
}