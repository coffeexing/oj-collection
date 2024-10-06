#include<iostream>
#include<cmath>
using namespace std;

int main(){
	const double PI=3.14;
	int h,r;
	cin>>h>>r;
	double V=PI*r*r*h;
	cout<<(int)ceil(20*pow(10,3)/V);
	
	return 0;
}

