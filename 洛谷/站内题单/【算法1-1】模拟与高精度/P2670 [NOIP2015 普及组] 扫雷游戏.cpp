#include<iostream>
#include<cmath>
#include<string>
using namespace std;

int main(){
	int n,m,cnt;
	char ch;
	cin>>n>>m;
	int arr[100][100];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			ch=getchar();
			if(ch=='\n'){
				ch=getchar();
			}
			if(ch=='*'){
				arr[i][j]=1;
			}
			if(ch=='?'){
				arr[i][j]=0;
			}
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(arr[i][j]){
				cout<<"*";
			} else {
				cnt=0;
				for(int x=i-1;x<=i+1;x++){
					for(int y=j-1;y<=j+1;y++){
						if(x<0||x>=n){
							continue;
						}
						if(y<0||y>=m){
							continue;
						}
						if(arr[x][y]==1){
							cnt++;
						}
					}
				}
				cout<<cnt;
			}
		}
		cout<<endl;
	}
	
	return 0;
}

