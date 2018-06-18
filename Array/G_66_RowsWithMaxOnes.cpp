#include <bits/stdc++.h>

using namespace std;

int first(int *arr,int low,int high){
	if(low<=high){

		int mid=low+(high-low)/2;
		if(mid==0 || arr[mid-1]==0 && arr[mid]==1)
			return mid;
		else if( mid==0)
			return first(arr,mid+1,high);
		else return first(arr,low,mid-1);
	}
	return -1;
}

int print_Max_Ones(int **arr,int row,int col){
	int max_row_index=0;
	int j=first(arr[0],0,col-1);
	if(j==-1)
		j=col-1;
	for(int i=1;i<row;i++){
		while(j>=0 && arr[i][j]==1){
			j--;
			max_row_index=i;
		}
	}
	return max_row_index;
}



int main(){
	int tc;
	cin>>tc;
	while(tc--){
	int size=4;
	int row,col;
	cin>>row>>col;
	int **arr=new int*[row];
	for(int i=0;i<row;i++)
		arr[i]=new int[col];

	for(int i=0;i<size;i++)
		for(int j=0;j<size;j++)
			cin>>arr[i][j];

	for(int i=0;i<row;i++)
		sort(arr[i],arr[i]+col);
	// arr[0][0]=0;
	// arr[0][1]=0;
	// arr[0][2]=0;
	// arr[0][3]=0;
	// arr[1][0]=0;
	// arr[1][1]=0;
	// arr[1][2]=1;
	// arr[1][3]=1;
	// arr[2][0]=0;
	// arr[2][1]=1;
	// arr[2][2]=1;
	// arr[2][3]=1;
	// arr[3][0]=1;
	// arr[3][1]=1;
	// arr[3][2]=1;
	// arr[3][3]=1;
	
	cout<<print_Max_Ones(arr,row,col)<<endl;

}

return 0;}