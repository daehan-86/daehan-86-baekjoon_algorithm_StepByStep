#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
typedef pair<int,int> pii;
vector<pii>p;
int n,k,d,m,a,s,e,res,algo[100001];
int bit(int n){
	int ret=0;
	for(int i=1;i<31;i++)
		if(n&(1<<i))ret++;
	return ret;
}
bool comp(const pii &a,const pii &b){
	return a.first<b.first;
}
int main(void){
	cin.tie(0);
	ios::sync_with_stdio(0);
	cin>>n>>k>>d;
	for(int i=0;i<n;i++){
		cin>>m>>a;
		p.push_back({a,i});
		for(int j=0;j<m;j++){
			cin>>a;
			algo[i]|=(1<<a);
		}
	}
	sort(p.begin(),p.end());
	while(s<=e&&e<n){
		s=upper_bound(p.begin()+s,p.begin()+e,pii(p[e].first-d,0),comp)-p.begin();
		e=upper_bound(p.begin()+e,p.end(),pii(d+p[s].first,0),comp)-p.begin();
		if(res<=30*(e-s)){
			int b=0,bs=-1;
			for(int i=s;i<e;i++){
				b|=algo[p[i].second];
				bs&=algo[p[i].second];
			}
			res=max(res,(bit(b)-bit(bs))*(e-s));
		}
	}
	cout<<res;
	return 0;
}