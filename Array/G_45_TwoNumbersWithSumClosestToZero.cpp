#include <bits/stdc++.h>

using namespace std;

void ClosestToZero(int *arr,int size){
	int min=INT_MAX;
	int lower,upper;

	for(int i=0;i<size;i++){
		for(int j=i+1;j<size;j++){
			if(abs(min)>abs(arr[i]+arr[j])){
				min=abs(arr[i]+arr[j]);
				lower=arr[i];
				upper=arr[j];
			}
		}
	}
	if(lower<upper)
		cout<<lower<<" "<<upper<<endl;
	else
		cout<<upper<<" "<<lower<<endl;
}
void ClosestToZeroOpt(int *arr,int size){
	sort(arr,arr+size);
	int l=0,r=size-1;
	int sum=INT_MAX;
	int lower,upper;
	while(l<r){
		int temp=arr[l]+arr[r];
		if(abs(temp)<abs(sum)){
			sum=abs(temp);
			lower=l;
			upper=r;
		}
		if(temp<0){
			l++;
		}else{
			r--;
		}
	}
	cout<<arr[lower]<<" "<<arr[upper]<<endl;
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
		

		// ClosestToZero(arr1,size);
		ClosestToZeroOpt(arr1,size);

		
	}
return 0;}