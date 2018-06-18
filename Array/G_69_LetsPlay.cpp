#include <bits/stdc++.h>

using namespace std;

int same(int **arr,int **copy,int row,int cols){
	for(int i=0;i<row;i++)
		for(int j=0;j<cols;j++)
			if(arr[i][j]!=copy[i][j])
				return 0;
return 1;
}

void PerformRotations(int **arr,int row,int cols,int X){
	int *temp=new int[2*cols];
	

	for(int i=0;i<row;i++){
		for(int j=0;j<cols;j++){
			
				temp[j]=arr[i][j]; 
		}
		for(int j=cols;j<(2*cols);j++)
			temp[j]=arr[i][j-cols];

		for(int j=0;j<cols;j++){
			if( (i%2)==0){
				arr[i][j]=temp[ ((X+j)%(2*cols)) ];
			}
		}
		int k=0;
		
		for(int j=0;j<cols;j++){
			if( (i%2)!=0){
				k=(cols-X+j)%(2*cols);
				arr[i][j]=temp[k];
			}
		}

		
	}
}

int main(){

int tc;
cin>>tc;
while(tc--){
	int rows,cols,X;
	cin>>rows>>cols;
	int **arr=new int*[rows];
	int **copy=new int*[rows];
	for(int i=0;i<rows;i++){
		arr[i]=new int[cols];
		copy[i]=new int[cols];
	}
	for(int i=0;i<rows;i++)
		for(int j=0;j<cols;j++){
			cin>>arr[i][j];
			copy[i][j]=arr[i][j];
		}
	cin>>X;
	PerformRotations(arr,rows,cols,(X%cols));
	cout<<same(arr,copy,rows,cols)<<endl;
}



return 0;}