#include <bits/stdc++.h>

using namespace std;




void getCofactor(int **mat, int **temp, int p, int q, int n)
{
    int i = 0, j = 0;
 
    // Looping for each element of the matrix
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n; col++)
        {
            //  Copying into temporary matrix only those element
            //  which are not in given row and column
            if (row != p && col != q)
            {
                temp[i][j++] = mat[row][col];
 
                // Row is filled, so increase row index and
                // reset col index
                if (j == n - 1)
                {
                    j = 0;
                    i++;
                }
            }
        }
    }
}

int findDeter(int **arr,int size){
	int D=0;
	if(size==1)
		return arr[0][0];
	int **temp=new int*[size];//To Store CoFactors
	for(int i=0;i<size;i++)
		temp[i]=new int[size];
	int sign=1;
	for(int i=0;i<size;i++){
		getCofactor(arr,temp,0,i,size);
		D+=sign*arr[0][i]*findDeter(temp,size-1);
		sign=-sign;
	}

	return D;
}

int main(){

int tc;
cin>>tc;
while(tc--){
	int size;
	cin>>size;
	int **arr=new int*[size];
	for(int i=0;i<size;i++)
		arr[i]=new int[size];

	for(int i=0;i<size;i++)
		for(int j=0;j<size;j++)
			cin>>arr[i][j];

	cout<<findDeter(arr,size)<<endl;
}




return 0;}