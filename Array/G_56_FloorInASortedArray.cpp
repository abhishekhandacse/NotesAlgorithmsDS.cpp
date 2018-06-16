#include <bits/stdc++.h>

using namespace std;

int floorsorted(int *arr,int low,int high,int x){
	if(x<arr[low])return -1;
	if(x>arr[high])return arr[high];

	int mid=low+(high-low)/2;

	if(x==arr[mid])
		return mid;
	else if(x<arr[mid]){
		if(mid>low && arr[mid-1]<x)
			return mid-1;
		else return floorsorted(arr,low,mid-1,x);
	}else{
		if(mid<high && x<arr[mid+1])
			return mid;
		else return floorsorted(arr,mid+1,high,x);
	}
}

int main(){
	int tc;
	cin>>tc;


	while(tc--){
		int size,x;
		cin>>size>>x;
		int *arr=new int[size];
		for(int i=0;i<size;i++)
			cin>>arr[i];

		cout<<floorsorted(arr,0,size-1,x)<<endl;

		
	}
return 0;}