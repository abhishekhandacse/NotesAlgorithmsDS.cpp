#include <bits/stdc++.h>

using namespace std;

int binary_search_aux(int *arr,int size){
	int left=0,right=size-1;
	while(left<=right){
		int mid=left+ ((right-left)/2);
		if(mid==0 || mid==size-1){
			return mid;
		}

		if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){
			return mid;
		}else if(arr[mid] > arr[mid+1]){
			right=mid-1;
		}else if(arr[mid] < arr[mid+1]){
			left=mid+1;
		}
	}
	return -1;
}
int binary_search_desc(int *arr,int size,int key){
	// This binary search sorts elements in descending order
	int left=0,right=size-1;
	while(left<=right){
		int mid=left+((right-left)/2);
		if(arr[mid]==key){
			return mid;
		}
		if(arr[mid]<key){
			right=mid-1;
		}else if(arr[mid]>key){
			left=mid+1;
		}
	}
	return -1;
}
int binary_search_asc(int *arr,int size,int key){
	// This binary search sorts elements in descending order
	int left=0,right=size-1;
	while(left<=right){
		int mid=left+((right-left)/2);
		if(arr[mid]==key){
			return mid;
		}
		if(arr[mid]<key){
			left=mid+1;
		}else if(arr[mid]>key){
			right=mid-1;
		}
	}
	return -1;
}
int bs(int *arr,int size,int key){
	int pivot=binary_search_aux(arr,size);
	if(key==arr[pivot])
		return 1;//Found

	// cout<<"pivot"<<pivot<<endl;
	if(key<arr[0]){//Array is in right subhalf
		return binary_search_desc(arr+pivot,size,key);
	}else{
		return binary_search_asc(arr,pivot,key);
	}
	
}

int main(){
	// int arr[]={20,30,40,50,10};
	// int size=sizeof(arr)/sizeof(int);
	// cout<<bs(arr,size,30);
	int tc;
	cin>>tc;
	while(tc--){
		int N,K;
		cin>>N>>K;
		int *arr=new int[N];
		for(int i=0;i<N;i++){
			cin>>arr[i];
		}
		int ans=bs(arr,N,K);
		if(ans==-1){
			cout<<"OOPS! NOT FOUND"<<endl;
		}else{
			cout<<ans<<endl;
		}
	}

}