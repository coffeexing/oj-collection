#include<iostream>
#include<cmath>
#include<cstring>
#include<algorithm>
using namespace std;

int main(){
	int a[2000]={0},b[2000]={0},sum[2001]={0};
	int len1,len2;
	char str[2001];
	cin>>str;
	len1=strlen(str);
	for(int i=0;i<len1;i++){
		a[2000-len1+i]=str[i]-'0';
	}
	cin>>str;
	len2=strlen(str);
	for(int i=0;i<len2;i++){
		b[2000-len2+i]=str[i]-'0';
	}
	int num,num1,num2;
	for(int i=0;i<=len2;i++){
		num2=b[1999-i];
		for(int j=0;j<=len1;j++){
			num1=a[1999-j];
			num=num1*num2+sum[2000-i-j];
			sum[1999-i-j]+=num/10;
			sum[2000-i-j]=num%10;
		}
	}
	int flag=0;
	for(int i=0;i<=2000;i++){
		if(sum[i]!=0||flag==1||i==2000){
			flag=1;
			cout<<sum[i];
		}
	}
	
	return 0;
}

