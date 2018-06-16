#include <iostream>

using namespace std;

void print(int **arr,int size){
	for(int i=0;i<size;i++){
		for(int j=0;j<size;j++){
			cout<<arr[i][j]<<" ";
		}
	// cout<<endl;
	}
	cout<<endl;
}


void rotateAnti(int **arr,int size){
	int var=size-1;
	for(int iter=0;iter<(size/2);iter++){
		for(int j=0;j<var;j++){
			
			int temp=arr[0+iter][0+iter];
			// Top

			for(int k=1+iter;k<size-iter;k++)
				arr[0+iter][k-1]=arr[0+iter][k];

			// Right 

			for(int k=1+iter;k<size-iter;k++)
				arr[k-1][size-1-iter]=arr[k][size-1-iter];
			// Bottom

			for(int k=size-1-iter;k>(0+iter);k--)
				arr[size-1-iter][k]=arr[size-1-iter][k-1];	
			// Left 

			for(int k=size-1-iter;k>(0+iter);k--)
				arr[k][0+iter]=arr[k-1][0+iter];

			arr[1+iter][0+iter]=temp;
		}
		var-=2;

	}

}

int main(){
	int tc;
	cin>>tc;
	while(tc--){
	int size=4;
	cin>>size;
	int **arr=new int*[size];
	for(int i=0;i<size;i++)
		arr[i]=new int[size];

	for(int i=0;i<size;i++)
		for(int j=0;j<size;j++)
			cin>>arr[i][j];

	// arr[0][0]=1;
	// arr[0][1]=2;
	// arr[0][2]=3;
	// arr[0][3]=4;
	// arr[1][0]=5;
	// arr[1][1]=6;
	// arr[1][2]=7;
	// arr[1][3]=8;
	// arr[2][0]=9;
	// arr[2][1]=10;
	// arr[2][2]=11;
	// arr[2][3]=12;
	// arr[3][0]=13;
	// arr[3][1]=14;
	// arr[3][2]=15;
	// arr[3][3]=16;
	// print(arr,size);
	rotateAnti(arr,size);
	print(arr,size);

}

return 0;}