#include <bits/stdc++.h>
using namespace std;


void ValueEqToIndex(int *arr,int low,int high){
	int count=0;
	for(int i=0;i<=high;i++)
		if(arr[i]==(i+1)){
			cout<<i+1<<" ";
			count++;
		}
	if(!count)
		cout<<"Not Found";

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

		// sort(arr,arr+size);

		ValueEqToIndex(arr,0,size-1);
		
	}




return 0;}