#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;

struct student{
	int id,s1,s2,s4;
	double s3;
}; 

int main(){
	struct student stu[1000];
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>stu[i].id>>stu[i].s1>>stu[i].s2;
		stu[i].s3=stu[i].s1*7+stu[i].s2*3;
		stu[i].s4=stu[i].s1+stu[i].s2;
	}
	for(int i=0;i<n;i++){
		if(stu[i].s3>=800&&stu[i].s4>140){
			cout<<"Excellent"<<endl;
		} else {
			cout<<"Not excellent"<<endl;
		}
	}
	
	return 0;
}

