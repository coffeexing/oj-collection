#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;

struct member{
	char name[30];
	char position[15];
	int exp,level,num,position_num;
};

int main(){
	int n;
	int arr[4]={2,4,7,25};
	struct member mem[110],temp;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>mem[i].name>>mem[i].position;
		cin>>mem[i].exp>>mem[i].level;
		mem[i].num=i;
	}
	for(int i=3;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(mem[i].exp<mem[j].exp){
				temp=mem[i];
				mem[i]=mem[j];
				mem[j]=temp;
			}
		}
	}
	for(int i=3;i<n;i++){
		if(arr[0]){
			strcpy(mem[i].position,"HuFa");
			arr[0]--;
		} else if(arr[1]){
			strcpy(mem[i].position,"ZhangLao");
			arr[1]--;
		} else if(arr[2]){
			strcpy(mem[i].position,"TangZhu");
			arr[2]--;
		} else if(arr[3]){
			strcpy(mem[i].position,"JingYing");
			arr[3]--;
		} else {
			strcpy(mem[i].position,"BangZhong");
		}
	}
	for(int i=3;i<n;i++){
		if(strcmp("BangZhu",mem[i].position)==0){
			mem[i].position_num=1;
			continue;
		}
		if(strcmp("FuBangZhu",mem[i].position)==0){
			mem[i].position_num=2;
			continue;
		}
		if(strcmp("HuFa",mem[i].position)==0){
			mem[i].position_num=3;
			continue;
		}
		if(strcmp("ZhangLao",mem[i].position)==0){
			mem[i].position_num=4;
			continue;
		}
		if(strcmp("TangZhu",mem[i].position)==0){
			mem[i].position_num=5;
			continue;
		}
		if(strcmp("JingYing",mem[i].position)==0){
			mem[i].position_num=6;
			continue;
		}
		if(strcmp("BangZhong",mem[i].position)==0){
			mem[i].position_num=7;
			continue;
		}
	}
	for(int i=3;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(mem[i].position_num>mem[j].position_num){
				temp=mem[i];
				mem[i]=mem[j];
				mem[j]=temp;
			} else if(mem[i].position_num==mem[j].position_num){
				if(mem[i].level<mem[j].level){
					temp=mem[i];
					mem[i]=mem[j];
					mem[j]=temp;
				} else if(mem[i].level==mem[j].level){
					if(mem[i].num>mem[j].num){
						temp=mem[i];
						mem[i]=mem[j];
						mem[j]=temp;
					}
				}
			}
		}
	}
	for(int i=0;i<n;i++){
		cout<<mem[i].name<<" ";
		cout<<mem[i].position<<" ";
		cout<<mem[i].level<<endl;
	}
	
	return 0;
}

