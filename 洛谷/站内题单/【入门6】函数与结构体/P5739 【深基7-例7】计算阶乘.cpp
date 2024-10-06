#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;

int factorial(int x,int sum);

int main(){
	int n,sum=1;
	cin>>n;
	cout<<factorial(n,sum);
	
	return 0;
}

int factorial(int x,int sum){
	if(x==1){
		return sum;
	}
	return factorial(x-1,x*sum);
}

