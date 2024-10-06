#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int n,m,x,y,r,z,cnt=1;
	int jx,jy,zx,zy,len;
	int arr1[501][501]={0},arr2[501][501]={0};
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			arr1[i][j]=cnt;
			arr2[i][j]=cnt++;
		}
	} 
	for(int k=0;k<m;k++){
		cin>>x>>y>>r>>z;
		switch(z){
			case 0:
				cnt=0;
				jx=x-r;jy=y-r;
				zx=x-r;zy=y+r;
				len=2*r+1;
				for(int i=0;i<len*len;i++){
					arr2[zx+cnt%len][zy-cnt/len]=arr1[jx+cnt/len][jy+cnt%len];
					cnt++;
				}
				break;
			case 1:
				cnt=0;
				jx=x-r;jy=y-r;
				zx=x+r;zy=y-r;
				len=2*r+1;
				for(int i=0;i<len*len;i++){
					arr2[zx-cnt%len][zy+cnt/len]=arr1[jx+cnt/len][jy+cnt%len];
					cnt++;
				}
				break;
		}
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				arr1[i][j]=arr2[i][j];
			}
		} 
	} 
	
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cout<<arr2[i][j]<<" ";
		}
		cout<<endl;
	}
	
	return 0;
}

