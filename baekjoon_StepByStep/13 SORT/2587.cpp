#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(void){
	vector<int>v(5);
	int s=0;
	for(int i=0;i<5;i++){
		scanf("%d",&v[i]);
		s+=v[i];
	}
	sort(v.begin(),v.end());
	printf("%d\n%d",s/5,v[2]);
	return 0;
}