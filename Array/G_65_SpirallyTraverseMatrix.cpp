#include <iostream>

using namespace std;

void print(int **arr,int row,int col){
	int left=0,top=0,right=col-1,bottom=row-1;
		while((left<right) && (top<bottom)){
			for(int i=left;i<=right;i++)
				cout<<arr[top][i]<<" ";
			top++;
			for(int i=top;i<=bottom;i++)
				cout<<arr[i][right]<<" ";
			right--;
			for(int i=right;i>=left;i--)
				cout<<arr[bottom][i]<<" ";
			bottom--;
			for(int i=bottom;i>=top;i--)
				cout<<arr[i][left]<<" ";
			left++;
	}
	cout<<endl;
}



int main(){
	int tc;
	cin>>tc;
	while(tc--){
	int size=4;
	// cin>>size;
	int **arr=new int*[size];
	for(int i=0;i<size;i++)
		arr[i]=new int[size];

	// for(int i=0;i<size;i++)
	// 	for(int j=0;j<size;j++)
	// 		cin>>arr[i][j];

	arr[0][0]=1;
	arr[0][1]=2;
	arr[0][2]=3;
	arr[0][3]=4;
	arr[1][0]=5;
	arr[1][1]=6;
	arr[1][2]=7;
	arr[1][3]=8;
	arr[2][0]=9;
	arr[2][1]=10;
	arr[2][2]=11;
	arr[2][3]=12;
	arr[3][0]=13;
	arr[3][1]=14;
	arr[3][2]=15;
	arr[3][3]=16;
	
	print(arr,size,size);

}

return 0;}