#include <bits/stdc++.h>

using namespace std;


void print(int *arr,int size){
	for(int i=0;i<size;i++)
		cout<<arr[i]<<" ";

	cout<<endl;
}

void DobuleNzero(int *arr,int size){
	for(int i=1;i<size;i++){
		if(arr[i-1]==arr[i]){
			arr[i-1]*=2;
			arr[i]=0;
		}
	}
}
void MoveZerosToRight(int *arr,int size){
	int i=-1;
	for(int j=0;j<size;j++){
		if(arr[j]>0){
			i++;
			swap(arr[i],arr[j]);
		}
	}
}

int main(){

	int tc;
	cin>>tc;
	while(tc--){
		int size;
		cin>>size;
		int *arr=new int[size];
		for(int i=0;i<size;i++)
			cin>>arr[i];
		// MoveZerosToRight(arr,size);
		DobuleNzero(arr,size);
		MoveZerosToRight(arr,size);

		print(arr,size);
	}


return 0;}