// #include <bits/stdc++.h>
# include <iostream>

using namespace std;
// Case 1 when size of both the dimensions is give

// Case 2 When only one dimesion is given

// # define cols 3
// void PrintArr(int arr[][cols],int rows){
// 	for(int i=0;i<rows;i++){
// 		for(int j=0;j<cols;j++){
// 			cout<<arr[i][j]<<" ";
// 		}
// 		cout<<endl;
// 	}
// }

// using single pointer case 3
void PrintArr(int *arr,int m,int n){
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cout<<*(arr+j+i*m);
		}
		cout<<endl;
	}
}		

int main(){
	int arr[][3]={
					{1,2,3},
					{4,5,6},
					{7,8,9}
				 };
	// PrintArr(arr,3,3);Wrong since it decays into pointer to blockof 3 ints int (*)[3]
				 // But we want pointer to integer only
	// PrintArr( (int *)arr , 3,3);//Always remember to cast this
	// Or
	PrintArr( &arr[0][0],3,3);

	return 0;

}
