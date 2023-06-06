#include<iostream>
#include<string>
using namespace std;

int main(void){
	string s,g;
	double f,r=0,sum=0;
	for(int i=0;i<20;i++){
		cin>>s>>f>>g;
		if(g!="P"){
			sum+=f;
			if(g=="A+") r+=f*4.5;
			else if(g=="A0") r+=f*4.0;
			else if(g=="B+") r+=f*3.5;
			else if(g=="B0") r+=f*3.0;
			else if(g=="C+") r+=f*2.5;
			else if(g=="C0") r+=f*2.0;
			else if(g=="D+") r+=f*1.5;
			else if(g=="D0") r+=f*1.0;
		}
	}
	printf("%.6lf",r/sum);
	return 0;
}