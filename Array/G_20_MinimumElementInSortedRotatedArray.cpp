#include <bits/stdc++.h>

using namespace std;

int pivot(int *arr,int size){
	int low=0,high=size-1;
	int mid=low+(high-low)/2;

	while(low<high){
		if(low==high)return mid;

		if(mid<size-1 && arr[mid] > arr[mid+1])
			return mid;

		if(mid>0 && arr[mid] < arr[mid-1])
			return mid-1;
		if(arr[low]<=arr[mid])
			low=mid+1;
		else high=mid-1;

		mid=low+(high-low)/2;
	}
	return -1;
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

		cout<<(pivot(arr,size)+1)%size<<endl;
	}



return 0;}