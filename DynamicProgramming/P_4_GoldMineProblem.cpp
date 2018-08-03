#include<bits/stdc++.h>

using namespace std;


int min_gold(vector<vector<int>> &gold,int row,int col){
	//Single row cannot move above and below
	if(row==1)
		return gold[0][0];

	if(col==1){
		//finding maximum value of first col
		int max=0;
		for(int i=0;i<row;i++)
			if(max<gold[i][0])
				max=gold[i][0];

		return max;
	}	
	int matrix[row+2][col];
	// Initialise matrix as 0
	for(int i=0;i<(row+2);i++)
		for(int j=0;j<col;j++)
			matrix[i][j]=0;
	// Keeping sentinal value in first and last row
	for(int i=0;i<col;i++){
		matrix[0][i]=INT_MIN;
		matrix[row+1][i]=INT_MIN;
	}
	// Copying all matrix values from gold for maximisation purpose
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			matrix[i+1][j]=gold[i][j];
		}
	}

	
		for(int j=1;j<col;j++){
			for(int i=1;i<(row+1);i++){
				matrix[i][j]=max(matrix[i-1][j-1]+matrix[i][j],max(matrix[i][j-1]+matrix[i][j],matrix[i+1][j-1]+matrix[i][j]) );
			}
	}

	// Finding maximum value of last col of matrix
	int	max=0;
	for(int i=1;i<(row+1);i++){
		if(max<matrix[i][col-1])
			max=matrix[i][col-1];
	}

	for(int i=0;i<row+2;i++){
		for(int j=0;j<col;j++){
			cout<<matrix[i][j]<<" ";
		}
	cout<<endl;
	}


	return max;
		


}

int main(){

	int tc;
	cin>>tc;
	while(tc--){
		int row,col;
		cin>>row>>col;

		vector<vector<int>> matrix;
		int temp;
		vector<int> vect;
		for(int i=0;i<row;i++){
			vect.clear();
			for(int j=0;j<col;j++){
				cin>>temp;
				vect.push_back(temp);
			}
			matrix.push_back(vect);
		}

		// for(int i=0;i<row;i++){
		// 	for(int j=0;j<col;j++){
		// 		cout<<matrix[i][j]<<" ";
		// 	}
		// 	cout<<endl;
		// }

	cout<<min_gold(matrix,row,col)<<endl;

	}



return 0;}