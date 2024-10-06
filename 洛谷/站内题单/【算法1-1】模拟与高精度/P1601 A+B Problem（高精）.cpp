#include<iostream>
#include<cmath>
#include<algorithm>
#include<string.h>
using namespace std;

int main(){
	int a[500]={0},b[500]={0},sum[501]={0};
	int len1,len2;
	char str[500];
	cin>>str;
	len1=strlen(str);
	for(int i=0;i<len1;i++){
		a[500-len1+i]=str[i]-'0';
	}
	cin>>str;
	len2=strlen(str);
	for(int i=0;i<len2;i++){
		b[500-len2+i]=str[i]-'0';
	}
	int num,carry=0;
	for(int i=1;i<=500;i++){
		num=a[500-i]+b[500-i]+carry;
		carry=num/10;
		sum[501-i]=num%10;
	}
	sum[0]=carry;
	int flag=0;
	for(int i=0;i<501;i++){
		if(sum[i]){
			flag=1;
		}
		if(flag||i==500){
			cout<<sum[i];
		}
	}
	
	return 0;
}

