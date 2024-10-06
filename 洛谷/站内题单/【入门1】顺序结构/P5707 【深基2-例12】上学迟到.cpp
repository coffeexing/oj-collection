#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main(){
	int s,v;
	cin>>s>>v;
	double t=(double)s/v+10;//min
	int h=(int)ceil(t)/60;
	int m=(int)ceil(t)%60;
	int hout=7-h+(7-h<0?24:0);
	int mout=60-m;
	if(mout==60){
		hout+=1;
		mout=0;
	}
	cout<<setw(2)<<setfill('0')<<hout<<":";
	cout<<setw(2)<<setfill('0')<<mout;
	return 0;
}

