#include<iostream>
#include<vector>
using namespace std;
vector<long long> max_area(vector<int> H){
	vector<long long> *ret=new vector<long long>;
	
	return *ret;
}
int main(void){
	int n;
	cin>>n;
	vector<int>v(n);
	for(int i=0;i<n;i++)cin>>v[i];
	vector<long long>t=max_area(v);
	cout<<t.size()<<"\n";
	for(int i=0;i<t.size();i++) cout<<t[i]<<"\n";
	return 0;
}