#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
double dis(double x1,double y1,double x2,double y2);

int main(){
	double x1,y1,x2,y2,x3,y3;
	cin>>x1>>y1>>x2>>y2>>x3>>y3;
	double d12=dis(x1,y1,x2,y2);
	double d23=dis(x2,y2,x3,y3);
	double d13=dis(x1,y1,x3,y3);
	double res=d12+d23+d13;
	cout<<fixed<<setprecision(2)<<res;

	return 0;
}

double dis(double x1,double y1,double x2,double y2){
	double p1=(x2-x1)*(x2-x1);
	double p2=(y2-y1)*(y2-y1); 
	return sqrt(p1+p2);
}

