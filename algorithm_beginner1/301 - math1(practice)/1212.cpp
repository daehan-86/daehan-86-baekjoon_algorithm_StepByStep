#include<iostream>
#include<string>
#include<math.h>
using namespace std;
int main(void){
	string s;
	cin>>s;
	bool state=0;
	for(int i=0;i<s.length();i++){
		int t = s[i]-'0',sum=0,j=0;
		while(t){
			sum+=(t%2)*pow(10,j);
			j++;
			t/=2;
		}
		if(state){
			printf("%03d",sum);
			continue;
		}
		printf("%d",sum);
		state=1;
	}
	return 0;
}