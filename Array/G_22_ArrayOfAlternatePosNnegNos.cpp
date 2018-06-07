#include <bits/stdc++.h>

using namespace std;

void Alternate(int *arr,int size){

	int pos=0;
	for(int i=0;i<size;i++)
		if(arr[i]>=0)
			pos++;

	int positive[pos];
	int negative[size-pos];
	int poscount=0,negcount=0;
	for(int i=0;i<size;i++){
		if(arr[i]>=0)
			positive[poscount++]=arr[i];
		else negative[negcount++]=arr[i];
	}
	int i=0;
	poscount=0,negcount=0;
	while(poscount <pos && negcount<(size-pos)){
		arr[i++]=positive[poscount++];
		arr[i++]=negative[negcount++];
	}
	while(poscount<pos)
		arr[i++]=positive[poscount++];

	while(negcount<(size-pos))
		arr[i++]=negative[negcount++];


	for(int i=0;i<size;i++)
		cout<<arr[i]<<" ";

	cout<<endl;
}

//////////////////////////
// Method 2 w/o using extra space but O(N^2) time complexity

void RightRotate(int *arr,int i,int j){
	int temp=arr[j];
	cout<<temp<<endl;
	
	for(int k=j;k>i;k--){
		arr[k]=arr[k-1];
	}
	arr[i]=temp;
}

void AlternatePosNneg(int *arr,int size){
	for(int i=0;i<(size);i++){
		if(i%2==0  &&  arr[i]<0 ){
			int j=i;
			for(j=i+1;j<size;j++)
				if(arr[j]>=0){
					RightRotate(arr,i,j);
					break;
				}
			
		}else if( i%2!=0  &&  arr[i]>=0){
			int j=i;
			for(j=i+1;j<size;j++)
				if(arr[j]<0){
					RightRotate(arr,i,j);
					break;
				}
			
		}
	}

	// Printing
	for(int i=0;i<size;i++)
		cout<<arr[i]<<" ";

	cout<<endl;
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

	// Alternate(arr,size);
	AlternatePosNneg(arr,size);
}



return 0;}