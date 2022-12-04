#include<iostream>
#include<stack>
using namespace std;
int result[1000001];
int main(void){
	int n,t;
	cin>>n;
	stack<pair<int,int>>s;
	for(int i=0;i<n;i++){
		scanf("%d",&t);
		if(!s.empty()){
			while(!s.empty()&&s.top().second<t){
				result[s.top().first]=t;
				s.pop();
			}
		}
		s.push(make_pair(i,t));
	}
	for(int i=0;i<n;i++){
		if(result[i]) printf("%d ",result[i]);
		else printf("-1 ");
	}
	return 0;
}