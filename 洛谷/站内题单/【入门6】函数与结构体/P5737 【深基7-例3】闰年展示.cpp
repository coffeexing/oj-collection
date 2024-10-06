#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;

int isLeapYear(int x);

int main(){
	int x,y,cnt=0;
	int year[1000];
	cin>>x>>y;
	for(int i=x;i<=y;i++){
		if(isLeapYear(i)){
			year[cnt++]=i;
		}
	}
	cout<<cnt<<endl;
	for(int i=0;i<cnt;i++){
		cout<<year[i]<<" ";
	}
	
	return 0;
}

int isLeapYear(int x){
	if(x%4==0&&x%100!=0||x%400==0){
		return 1;
	}
	return 0;
}

