#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
string a,b,c;
int main(void){
	cin>>a>>b;
	reverse(a.begin(),a.end());
	reverse(b.begin(),b.end());
	int i=0,t=0,aa=a.length(),bb=b.length();
	if(bb>aa){swap(a,b);swap(aa,bb);}
	while(aa>i||t){
		c.push_back((((aa>i)?a[i]-'0':0)+((bb>i)?b[i]-'0':0)+t)%10+'0');
		t=(((aa>i)?a[i]-'0':0)+((bb>i)?b[i]-'0':0)+t)/10;
		i++;
	}
	reverse(c.begin(),c.end());
	cout<<c;
	return 0;
}