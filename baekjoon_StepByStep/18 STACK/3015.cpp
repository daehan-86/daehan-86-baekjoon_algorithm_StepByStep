#include<iostream>
#include<stack>
using namespace std;
stack<pair<int,int>>s;
int main(void){
	int n,t;
	long long res=0;
	scanf("%d",&n);
	while(n--){
		scanf("%d",&t);
		if(s.empty()) s.push({t,0});
		else{
			while(!s.empty()){
				auto x=s.top();
				if(x.first>t){
					res++;
					s.push({t,1});
					break;
				}
				else if(x.first==t){
					res+=x.second+1;
					s.push({t,x.second+1});
					break;
				}
				else{
					s.pop();
					res++;
					if(s.empty()){
						s.push({t,0});
						break;
					}
				}
			}
		}
		//printf("%d    %lld\n",s.size(),res);
	}
	cout<<res;
	return 0;
}