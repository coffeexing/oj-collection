#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int k,a,cnt=0;
	cin>>k;
	for(int i=k;i>0;i--){
		cin>>a;
		if(a==0){
			cnt++;
			continue; 
		} else if(a==1){
			if(i==k){
				cout<<"";
			} else {
				cout<<"+";
			}
		} else if(a==-1){
			cout<<"-";
		} else if(a>0){
			if(i==k){
				cout<<a;
			} else {
				cout<<"+"<<a;
			}
		} else {
			cout<<a;
		}
		if(i==1){
			cout<<"x";
		} else {
			cout<<"x^"<<i;
		}
	}
	cin>>a;
	if(a==0){
		if(cnt==k){
			cout<<0;
		} else {
			cout<<"";
		}
	} else if(a>0){
		if(cnt==k){
			cout<<a;
		} else {
			cout<<"+"<<a;
		}
	} else {
		cout<<a;
	}
	
	return 0;
}

