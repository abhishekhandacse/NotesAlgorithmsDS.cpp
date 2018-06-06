#include <bits/stdc++.h>
using namespace std;

int PrintMaxSize(int *arr,int rows,int columns){
	int Aux[rows][columns];
	for(int i=0;i<rows;i++){
		for(int j=0;j<columns;j++){
			if(i==0 || j==0){
				Aux[i][j]=arr[j+i*columns];
			}
			if(arr[j+i*columns]==1)
				Aux[i][j]=min(Aux[i-1][j],min(Aux[i][j-1],Aux[i-1][j-1]))+1;
			else{
				Aux[i][j]=arr[j+i*columns];
			}
		}
	}
	// Find maximum in the auxillary array
	int max=INT_MIN,iIndex=0,jIndex=0;
	for(int i=0;i<rows;i++){
		for(int j=0;j<columns;j++){
			if(Aux[i][j]>max){
				max=Aux[i][j];
				iIndex=i;
				jIndex=j;
			}
		}
	}

	for(int i=iIndex-max+1;i<iIndex+1;i++){
		for(int j=jIndex-max+1;j<jIndex+1;j++){
			cout<<Aux[i][j]<<" ";
		}
		cout<<endl;
	}
return max;

}
int main(){
	int arr[][5]={
				 {0,1,1,0,1},
				 {1,1,0,1,0},
				 {0,1,1,1,0},
				 {1,1,1,1,0},
				 {1,1,1,1,1},
				 {0,0,0,0,0}
				};
	int rows=6,columns=5;
	cout<<PrintMaxSize((int*)arr,rows,columns);
}