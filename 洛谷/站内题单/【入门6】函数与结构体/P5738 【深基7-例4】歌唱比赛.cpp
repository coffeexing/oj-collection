#include<iostream>
#include<iomanip>
#include<cmath>
#include<cstring>
using namespace std;

int main(){
	double dmax=0,sum;
	int n,m,max,min;
	int arr[20];
	cin>>n>>m;
	for(int i=0;i<n;i++){
		max=0;
		min=10;
		sum=0;
		for(int j=0;j<m;j++){
			cin>>arr[j];
			if(arr[j]>max){
				max=arr[j];
			}
			if(arr[j]<min){
				min=arr[j];
			}
		}
		for(int j=0;j<m;j++){
			sum+=arr[j];
		}
		sum-=max+min;
		sum/=m-2;
		if(sum>dmax){
			dmax=sum;
		}
	}
	cout<<fixed<<setprecision(2)<<dmax;
	
	return 0;
}

