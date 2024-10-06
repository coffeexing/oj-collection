#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;
int FingerGuess(int a,int b);

int main(){
	int n,nA,nB,sumA=0,sumB=0,res;
	int arrA[200],arrB[200];
	cin>>n>>nA>>nB;
	for(int i=0;i<nA;i++){
		cin>>arrA[i];
	}
	for(int i=0;i<nB;i++){
		cin>>arrB[i];
	}
	for(int i=0;i<n;i++){
		res=FingerGuess(arrA[i%nA],arrB[i%nB]);
		if(res==1){
			sumA++;
		}
		if(res==-1){
			sumB++;
		}
	}
	cout<<sumA<<" "<<sumB;
	
	return 0;
}

int FingerGuess(int a,int b){
	int table[5][5]={
	{0,-1,1,1,-1},
	{1,0,-1,1,-1},
	{-1,1,0,-1,1},
	{-1,-1,1,0,1},
	{1,1,-1,-1,0}};
	
	return table[a][b];
}
