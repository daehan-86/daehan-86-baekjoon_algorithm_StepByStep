#include<iostream>
#include<string>
using namespace std;
string cro[8]={"c=","c-","dz=","d-","lj","nj","s=","z="};
int main(void){
	string s;
	int c=0;
	cin>>s;
	for(int i=0;i<s.length();i++){
		for(int j=0;j<8;j++){
			bool state=1;
			for(int k=0;k<cro[j].length();k++){
				if(i+k>=s.length()||cro[j][k]!=s[i+k]) {state=0;break;}
			}
			if(state){
				i+=cro[j].length()-1;
				break;
			}
		}
		c++;
	}
	cout<<c;
	return 0;
}