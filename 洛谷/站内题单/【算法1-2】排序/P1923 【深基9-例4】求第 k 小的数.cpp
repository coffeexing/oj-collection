#include<iostream>
#include<cmath>
#include<cstring>
#include<algorithm>
using namespace std;

int main(){
	int n,k,min=0x7fffffff,max=0,temp; 
	int arr[500000];
	cin>>n>>k;
	for(int i=0;i<n;i++){
		cin>>arr[i];
		if(arr[i]>max){
			max=arr[i];
		}
	}
	for(int i=0;i<n;i++){
		if(arr[i]<min){
			min=arr[i];
		}
	}
	while(k--){
		temp=min;
		min=0x7fffffff;
		for(int i=0;i<n;i++){
			if(arr[i]==temp){
				arr[i]=min;
			}
			if(arr[i]<min&&arr[i]!=temp){
				min=arr[i];
			}
		}
	}
	cout<<min;

	return 0;
}

