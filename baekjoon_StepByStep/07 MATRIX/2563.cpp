#include<iostream>
using namespace std;
bool a[101][101];
int main(void){
	int n,x,y,c=0;
	cin>>n;
	while(n--){
		scanf("%d %d",&x,&y);
		for(int i=0;i<10;i++)
			for(int j=0;j<10;j++)
				a[x+i][y+j]=1;
	}
	for(int i=0;i<101;i++)
		for(int j=0;j<101;j++)
			c+=a[i][j];
	cout<<c;
	return 0;
}