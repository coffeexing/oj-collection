#include<iostream>
#include<cmath>
using namespace std;
int isPrime(int x);

int main(){
	int n,a;
	cin>>n;
	for(int i=0;i<5;i++){
		cin>>a;
		if(isPrime(a)){
			cout<<a<<" ";
		}
	}

	return 0;
}

int isPrime(int x){
	if(x<2){
		return 0;
	}
	for(int i=2;i<=sqrt(x);i++){
		if(x%i==0){
			return 0;
		}
	}
	return 1;
}
