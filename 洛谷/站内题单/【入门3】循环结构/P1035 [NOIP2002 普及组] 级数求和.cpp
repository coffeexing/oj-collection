#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int n=0,k;
	double Sn=0;
	cin>>k;
	while(++n){
		Sn+=(double)1/n;
		if(Sn>k){
			break;
		}
	}
	cout<<n;
	
	return 0;
}

