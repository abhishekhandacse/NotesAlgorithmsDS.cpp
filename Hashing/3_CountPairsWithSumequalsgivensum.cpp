#include <bits/stdc++.h>

using namespace std;

int bs(int *arr,int size,int key){
	int low=0,high=size-1;
	while(low<=high){
		int mid=low+(high-low)/2;
		if(arr[mid]==key){
			return mid;
		}else if(arr[mid]<key){
			low=mid+1;
		}else{
			high=mid-1;
		}
	}
	return 0;
}

int main(){
	int tc;
	cin>>tc;
	while(tc--){
		int size;
		cin>>size;
		int *arr=new int[size];
		int *aux=new int[size];
		for(int i=0;i<size;i++){
			cin>>arr[i];
			aux[i]=arr[i];
		}

		sort(arr,arr+size);

		for(int i=0;i<size;i++){
			int val=bs(arr,size,aux[i]);
			cout<<val<<" ";
		}
		cout<<endl;
	}



return 0;}