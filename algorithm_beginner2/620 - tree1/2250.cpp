#include<iostream>
#include<algorithm>
using namespace std;
pair<int,int>p[10001];
pair<int,int>res[10001];
bool par[10001];
int x=0;
typedef struct node{
	int n,w,h;
	node *l=NULL,*r=NULL;
	int insert(int k,int h,int d){
		x=max(x,h);
		n=k;
		this->h=h;
		int a=0,b=0;
		if(p[k].first!=-1){
			l=new node;
			a=l->insert(p[k].first,h+1,d);
		}
		w=d+a+1;
		if(p[k].second!=-1){
			r=new node;
			b=r->insert(p[k].second,h+1,w);
		}
		res[this->h].first=min(w,res[this->h].first);
		res[this->h].second=max(w,res[this->h].second);
		return a+b+1;
	}
}node;
int main(void){
	fill(res,res+10001,make_pair(1000000,0));
	int n,a,b,c,resi=0,resw=0;
	cin>>n;
	for(int i=0;i<n;i++){
		scanf("%d %d %d",&a,&b,&c);
		p[a]={b,c};
		if(b>0)par[b]=1;
		if(c>0)par[c]=1;
	}
	node *t=new node;
	for(int i=1;i<=n;i++){
		if(!par[i]){
			t->insert(i,1,0);
			break;
		}
	}
	for(int i=x;i>0;i--){
		if(resw<=res[i].second-res[i].first){
			resi=i;
			resw=res[i].second-res[i].first;
		}
	}
	printf("%d %d",resi,resw+1);
	return 0;
}