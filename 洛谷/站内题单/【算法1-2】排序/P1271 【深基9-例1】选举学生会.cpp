#include<iostream>
#include<cmath>
#include<cstring>
#include<algorithm>
using namespace std;

int main(){
	int n,m,a;
	int arr[1000]={0};
	cin>>n>>m;
	for(int i=0;i<m;i++){
		cin>>a;
		arr[a]++;
	}
	for(int i=1;i<=n;i++){
		if(arr[i]){
			for(int j=0;j<arr[i];j++){
				cout<<i<<" ";
			}
		}
	}
	
	return 0;
}

