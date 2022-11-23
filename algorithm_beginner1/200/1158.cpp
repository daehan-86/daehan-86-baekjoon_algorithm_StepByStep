#include<iostream>
#include<queue>
using namespace std;

int main(void){
	int n,k,t=0;
	cin>>n>>k;
	queue<int>q;
	cout<<"<";
	for(int i=1;i<=n;i++){
		q.push(i);
	}
	while(!q.empty()){
		int x=q.front();
		q.pop();
		t++;
		if(t==k){
			t=0;
			cout<<x;
			if(!q.empty()){
				cout<<", ";
			}
		}
		else q.push(x);
	}
	cout<<">";
	return 0;
}