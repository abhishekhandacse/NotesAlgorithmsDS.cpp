#include <bits/stdc++.h>

using namespace std;

void WaveForm(int *arr,int size){
	sort(arr,arr+size);
	for(int i=0;i<size;i+=2){

		if(i>0  && arr[i-1]>arr[i]  )
			swap(arr[i-1],arr[i]);

		if(i<(size-1)  && arr[i]<arr[i+1] )
			swap(arr[i],arr[i+1]);
		
	}
	for(int i=0;i<size;i++)
		cout<<arr[i]<<" ";
	cout<<endl;

}


int main(){
	int tc;
	cin>>tc;


	while(tc--){
		int size,x;
		cin>>size;
		int *arr1=new int[size];
		
		for(int i=0;i<size;i++)
			cin>>arr1[i];
		

		WaveForm(arr1,size);

		
	}
return 0;}