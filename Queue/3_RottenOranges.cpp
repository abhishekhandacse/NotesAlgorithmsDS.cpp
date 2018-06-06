#include <iostream>

using namespace std;

int Ones(int **arr,int row,int col){
	int ones=0;
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			if(arr[i][j]==1)
				ones++;
		}
	}
return ones;
}
void print(int **arr,int row,int col){
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
}
int MinTime(int **arr,int row,int col){
	int times=0,ones=-1;
	while(1){
		
		if(Ones(arr,row,col)==0){
			return times;
		}else if( (ones==(Ones(arr,row,col))) ){
			return -1;
		}else{	
				times++;
				ones=Ones(arr,row,col);
				for(int i=0;i<row;i++){
					for(int j=0;j<col;j++){
						if(arr[i][j]==2){
							if(i!=0 && (arr[i-1][j]==1) )
								arr[i-1][j]=2;
							if((i!=row-1) && (arr[i+1][j]==1))
								arr[i+1][j]=2;
							if( (j!=0) && (arr[i][j-1]==1))
								arr[i][j-1]=2;
							if( (j!=col-1) && (arr[i][j+1]==1) )
								arr[i][j+1]=2;
						}
					}
				}
				print(arr,row,col);		
		}
	}
}

int main(){
	int tc;
	cin>>tc;

	while(tc--){
		int rows,cols;
		cin>>rows>>cols;
		int **arr= new int*[rows];
		for(int i=0;i<rows;i++){
			arr[i]=new int[cols];
		}
		
		for(int i=0;i<rows;i++){
			for(int j=0;j<cols;j++){
				cin>>arr[i][j];
			}
		}

		cout<<MinTime(arr,rows,cols)<<endl;

	}


return 0;}