#include <iostream>

using namespace std;

int MinCostPath(int *arr,int rows,int cols){
	int **aux=new int*[rows];
	for(int i=0;i<rows;i++)
		aux[i]=new int[cols];
	// Dynamically 2d array created
	aux[0][0]=arr[0];
	for(int i=0;i<rows;i++){
		for(int j=0;j<cols;j++){
			if(i==0 && j==0)
				continue;
			if(i==0 && j!=0){
				aux[i][j]=aux[i][j-1]+arr[j+i*cols];
				continue;
			}
			if(j==0 && i!=0){
				aux[i][j]=aux[i-1][j]+arr[j+i*cols];
				continue;
			}

			aux[i][j]=min(aux[i-1][j] ,min(aux[i][j-1],aux[i-1][j-1]))+arr[j+i*cols];
		}
	}
	return aux[rows-1][cols-1];
}
int main(){
	int arr[][3]={
					{1,2,3},
					{4,8,2},
					{1,5,3}
				};
	// Call function to compute minimum cost path
	cout<<MinCostPath((int*)arr,3,3);

return 0;}