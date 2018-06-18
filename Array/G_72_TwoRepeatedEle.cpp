#include <bits/stdc++.h>
using namespace std;


void ValueEqToIndex(int *arr,int low,int high){
	for(int i=0;i<=high;i++){
		if(arr[abs(arr[i])-1]>0){
			arr[abs(arr[i])-1]=-arr[abs(arr[i])-1];
			// cout<<"Hello"<<" ";
		}else{
			cout<<abs(arr[i])<<" ";
		}
	}
	cout<<endl;
}



int main(){

	int tc;
	cin>>tc;
	while(tc--){
		int size;
		cin>>size;
		size+=2;
		int *arr=new int[size];
		for(int i=0;i<size;i++)
			cin>>arr[i];

		// sort(arr,arr+size);

		ValueEqToIndex(arr,0,size-1);
		
	}




return 0;}