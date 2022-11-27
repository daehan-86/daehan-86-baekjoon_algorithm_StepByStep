#include<iostream>
#include<stack>
using namespace std;
int result[1000001],cnt[1000001],a[1000001];
int main(void){
	int n,k;
	cin>>n;
	stack<pair<int,int>>s;
	for(int i=0;i<n;i++){
		scanf("%d",a+i);
		cnt[a[i]]++;
	}
	for(int i=0;i<n;i++){
		if(!s.empty()){
			while(!s.empty()&&cnt[s.top().second]<cnt[a[i]]){
				result[s.top().first]=a[i];
				s.pop();
			}
		}
		s.push(make_pair(i,a[i]));
	}
	for(int i=0;i<n;i++){
		if(result[i]) printf("%d ",result[i]);
		else printf("-1 ");
	}
	return 0;
}