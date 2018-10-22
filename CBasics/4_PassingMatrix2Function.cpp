#include<iostream>

using namespace std;

void printme(int **mat,int rows,int col){

	for(int i=0;i<rows;i++){
		for(int j=0;j<col;j++){
			cout<<mat[i][j]<<"  ";
		}
		cout<<endl;
	}
}

int main(){

	int rows=3,col=4;
	int **mat=new int*[rows];
	for(int i=0;i<col;i++){
		mat[i]=new int[col];
	}

	int count=0;

	for(int i=0;i<rows;i++){
		for(int j=0;j<col;j++)
			mat[i][j]=count++;
	}

	printme(mat,rows,col);


return 0;}