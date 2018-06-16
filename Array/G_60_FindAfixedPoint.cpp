#include <bits/stdc++.h>

using namespace std;
// Finds 2 Non Repeating elements in the array
int FindthefixedPoint(int *arr,int low,int high){
	if(low<=high){
		int mid=low+(high-low)/2;
		if(mid==arr[mid]){
			return mid;
		}else if(mid>arr[mid])
			return FindthefixedPoint(arr,mid+1,high);
		else return FindthefixedPoint(arr,low,mid-1);
	}
	return -1;
}

int main(){
	int tc;
	cin>>tc;


	while(tc--){
		int size;
		cin>>size;
		// size=size*2;
		// size+=2;
		int *arr=new int[size];
		for(int i=0;i<size;i++)
			cin>>arr[i];
		sort(arr,arr+size);
		cout<<FindthefixedPoint(arr,0,size-1)<<endl;

		
	}
return 0;}