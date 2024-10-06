#include<iostream>
#include<cmath>
#include<string>
using namespace std;

int main(){
	int w,l,len=0;
	char ch;
	int str[65000];
	while((ch=getchar())!='E'){
		if(ch=='\n'){
			continue;
		}
		if(ch!='E'){
			str[len++]=ch;
		}
	}
	
	w=0;l=0;
	for(int i=0;i<len;i++){
		switch(str[i]){
			case 'W':w++;break;
			case 'L':l++;break;
		}
		if(w>=11&&w-l>=2){
			cout<<w<<":"<<l<<endl;
			w=0;l=0;
		}
		if(l>=11&&l-w>=2){
			cout<<w<<":"<<l<<endl;
			w=0;l=0;
		}
	}
	cout<<w<<":"<<l<<endl;
	cout<<endl;
	
	w=0;l=0;
	for(int i=0;i<len;i++){
		switch(str[i]){
			case 'W':w++;break;
			case 'L':l++;break;
		}
		if(w>=21&&w-l>=2){
			cout<<w<<":"<<l<<endl;
			w=0;l=0;
		}
		if(l>=21&&l-w>=2){
			cout<<w<<":"<<l<<endl;
			w=0;l=0;
		}
	}
	cout<<w<<":"<<l;

	return 0;
}

