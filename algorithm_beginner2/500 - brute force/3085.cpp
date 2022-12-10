#include<iostream>
#include<string>
using namespace std;
#define MAX(A,B,C) max(A,max(B,C))
string br[50];
int n,result;
int line(int k,int d){
	int ret=0,temp=0;
	char c='a';
	for(int i=0;i<n;i++){
		char &t=(d?br[i][k]:br[k][i]);
		if(c!=t){
			c=t;
			ret=max(ret,temp);
			temp=1;
		}
		else temp++;
	}
	return max(ret,temp);
}
int candy(int x,int y,int d){
	return MAX(line(x,0),line(y,1),line(d?(y+1):(x+1),d));
}
int main(void){
	cin>>n;
	for(int i=0;i<n;i++) cin>>br[i];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i<n-1){
				swap(br[i][j],br[i+1][j]);
				result=max(result,candy(i,j,0));
				swap(br[i][j],br[i+1][j]);
			}
			if(j<n-1){
				swap(br[i][j],br[i][j+1]);
				result=max(result,candy(i,j,1));
				swap(br[i][j],br[i][j+1]);
			}
		}
	}
	cout<<result;
	return 0;
}