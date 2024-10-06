#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int h1,m1,h2,m2;
	cin>>h1>>m1>>h2>>m2;
	int sum1=h1*60+m1;
	int sum2=h2*60+m2;
	int delta=sum2-sum1;
	cout<<delta/60<<" "<<delta%60;
	
	return 0;
}

