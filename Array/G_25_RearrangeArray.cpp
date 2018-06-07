#include <bits/stdc++.h>

using namespace std;


void print(int *arr,int size){
	for(int i=0;i<size;i++)
		cout<<arr[i]<<" ";

	cout<<endl;
}


void rearrange(int *arr,int size){
	int *copy=new int[size];
	for(int i=0;i<size;i++)
		copy[i]=arr[i];

	sort(copy,copy+size);

	int c=0,j=size-1;
	for(int i=0;i<size;i++){
		if( (i%2)==0){
			arr[i]=copy[c++];
		}else{
			arr[i]=copy[j--];
		}
	}
	print(copy,size);
	delete(copy);
}

int main(){

	int tc;
	cin>>tc;
	while(tc--){
		int size,k;
		cin>>size;
		int *arr=new int[size];
		for(int i=0;i<size;i++)
			cin>>arr[i];
		rearrange(arr,size);

		print(arr,size);
	}


return 0;}