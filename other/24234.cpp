#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;
typedef long long ll;
unordered_map<int,ll>res;
typedef struct node{
	int k=0;
	ll n=0,n2=0;
	unordered_map<int,node*>m;
	node(int k){
		this->k=k;
	}
	void insert(int i,vector<int>&v){
		n++;
		n2=n*n;
		if(i==v.size()) return;
		auto t=m.find(v[i]);
		node *tmp;
		if(t==m.end()){
			tmp=new node(v[i]);
			m.insert({v[i],tmp});
		}
		else tmp=t->second;
		tmp->insert(i+1,v);
	}
	void gibo(){
		auto t=res.find(k);
		ll s=0,s2=0;
		for(auto i=m.begin();i!=m.end();i++){
			s+=i->second->n;
			s2+=i->second->n2;
		}
		ll r=(s*s-s2)/2;
		if(t==res.end())res.insert({k,r});
		else t->second+=r;
		for(auto i=m.begin();i!=m.end();i++){
			i->second->gibo();
		}
	}
}node;
int main(void){
	int n,q,t;
	cin>>n>>q;
	node A(0);
	for(int i=0;i<n;i++){
		scanf("%d",&t);
		vector<int>v(t);
		for(int j=0;j<t;j++)scanf("%d",&v[j]);
		A.insert(0,v);
	}
	A.gibo();
	for(int i=0;i<q;i++){
		scanf("%d",&t);
		printf("%lld\n",res[t]);
	}
	return 0;
}