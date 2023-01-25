#include<iostream>
using namespace std;
pair<int,int>p[27];
typedef struct node{
	char c;
	node *l=NULL;
	node *r=NULL;
	node(int c){
		this->c=c+'A';
		if(p[c].first!=-1) l=new node(p[c].first);
		if(p[c].second!=-1) r=new node(p[c].second);
	}
	void ff(){
		printf("%c",c);
		if(l!=NULL) l->ff();
		if(r!=NULL) r->ff();
	}
	void cf(){
		if(l!=NULL) l->cf();
		printf("%c",c);
		if(r!=NULL) r->cf();
	}
	void bf(){
		if(l!=NULL) l->bf();
		if(r!=NULL) r->bf();
		printf("%c",c);
	}
}node;
int main(void){
	int n;
	char a,b,c;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a>>b>>c;
		if(b!='.') p[a-'A'].first=b-'A';
		else p[a-'A'].first=-1;
		if(c!='.') p[a-'A'].second=c-'A';
		else p[a-'A'].second=-1;
	}
	node *t=new node(0);
	t->ff();
	printf("\n");
	t->cf();
	printf("\n");
	t->bf();
	return 0;
}