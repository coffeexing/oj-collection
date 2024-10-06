#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;

struct student{
	char name[9];
	int chinese,math,english,total;
};

int main(){
	struct student stu[1000];
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>stu[i].name>>stu[i].chinese;
		cin>>stu[i].math>>stu[i].english;
		stu[i].total=stu[i].chinese+stu[i].math+stu[i].english;
	}
	int max=0;
	for(int i=1;i<n;i++){
		if(stu[i].total>stu[max].total){
			max=i;
		}
	}
	cout<<stu[max].name<<" "<<stu[max].chinese<<" ";
	cout<<stu[max].math<<" "<<stu[max].english;	
	
	return 0;
}

