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
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(abs(stu[i].chinese-stu[j].chinese)>5){
				continue;
			}
			if(abs(stu[i].math-stu[j].math)>5){
				continue;
			}
			if(abs(stu[i].english-stu[j].english)>5){
				continue;
			}
			if(abs(stu[i].total-stu[j].total)>10){
				continue;
			}
			cout<<stu[i].name<<" "<<stu[j].name<<endl;
		}
	}
	
	return 0;
}

