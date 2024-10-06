#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;

int main(){
	int p1,p2,p3;
	char start,stop;
	char str[110];
	cin>>p1>>p2>>p3; 
	cin>>str;
	int len=strlen(str);
	for(int i=0;i<len;i++){
		if(str[i]=='-'){
			start=str[i-1];
			stop=str[i+1];
			if(i==0||i==len-1){
				cout<<str[i];
				continue;
			}
			if(start>=stop){
				cout<<str[i];
				continue;
			}
			if(isdigit(start)&&isalpha(stop)){
				cout<<str[i];
				continue;
			}
			if(isalpha(start)&&isdigit(stop)){
				cout<<str[i];
				continue;
			}
			if(p1==3){
				for(char ch=start+1;ch<stop;ch++){
					for(int j=0;j<p2;j++){
						cout<<'*';
					}
				}
				continue;	
			}
			if(islower(start)&&islower(stop)){
				if(p1==1&&p3==1){
					for(char ch=start+1;ch<stop;ch++){
						for(int j=0;j<p2;j++){
							cout<<ch;
						}
					}
					continue;
				}
				if(p1==1&&p3==2){
					for(char ch=stop-1;ch>start;ch--){
						for(int j=0;j<p2;j++){
							cout<<ch;
						}
					}
					continue;
				}
				if(p1==2&&p3==1){
					start-='a'-'A';
					stop-='a'-'A';
					for(char ch=start+1;ch<stop;ch++){
						for(int j=0;j<p2;j++){
							cout<<ch;
						}
					}
					continue;
				}
				if(p1==2&&p3==2){
					start-='a'-'A';
					stop-='a'-'A';
					for(char ch=stop-1;ch>start;ch--){
						for(int j=0;j<p2;j++){
							cout<<ch;
						}
					}
					continue;
				}
			}
			if(isdigit(start)&&isdigit(stop)){
				if(p3==1){
					for(char ch=start+1;ch<stop;ch++){
						for(int j=0;j<p2;j++){
							cout<<ch;
						}
					}
					continue;
				}
				if(p3==2){
					for(char ch=stop-1;ch>start;ch--){
						for(int j=0;j<p2;j++){
							cout<<ch;
						}
					}
					continue;
				}
			}
			cout<<str[i];
		} else {
			cout<<str[i];
		}
	}
	
	return 0;
}

