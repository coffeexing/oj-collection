#include<iostream>
#include<cmath>
#include<cstring>
#include<algorithm>
using namespace std;

int main(){
	int n,b,cnt=0,sum=0;
	int height[20000];
	cin>>n>>b;
	for(int i=0;i<n;i++){
		cin>>height[i];
	}
	sort(height,height+n);
	while(sum<b){
		sum+=height[--n];
		cnt++;
	}
	cout<<cnt;

	return 0;
}

