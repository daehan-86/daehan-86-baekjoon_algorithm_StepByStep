#include<iostream>
#include<deque>
using namespace std;
deque<int>d;
int main(void){
	int n,m,t,c=0;
	scanf("%d %d",&n,&m);
	for(int i=1;i<=n;i++)d.push_back(i);
	for(int i=0;i<m;i++){
		scanf("%d",&t);
		int k=0;
		while(d.front()!=t){
			int x=d.front();
			d.pop_front();
			d.push_back(x);
			k++;
		}
		c+=min(k,(int)d.size()-k);
		d.pop_front();
	}
	cout<<c;
	return 0;
}