#include<iostream>
#include<cmath>
using namespace std;

int main(){
	double d1,d2,cnt=0;
	int i1,i2=0;
	cin>>d1;
	i1=(int)(d1*10);
	while(i1){
		i2=i2*10+i1%10;
		i1/=10;
		cnt++;
	}
	d2=(double)i2/pow(10,cnt-1);
	cout<<d2; 
	
	return 0;
}

