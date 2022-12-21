#include<iostream>
#include<algorithm>
using namespace std;
int n,m;
char v[20];
bool isvo[26];
void br(char *a,int d,int p,int vo,int co){
	if(d==m){
		if(vo>0&&co>1){
			a[m]='\0';
			printf("%s\n",a);
		}
		return;
	}
	for(int i=p+1;i<n;i++){
		a[d]=v[i];
		if(isvo[v[i]-'a']) br(a,d+1,i,vo+1,co);
		else br(a,d+1,i,vo,co+1);
	}
}
int main(void){
	cin>>m>>n;
	isvo[0]=1,isvo['e'-'a']=1,isvo['i'-'a']=1,isvo['o'-'a']=1,isvo['u'-'a']=1;
	for(int i=0;i<n;i++)cin>>v[i];
	sort(v,v+n);
	char a[20];
	br(a,0,-1,0,0);
	return 0;
}