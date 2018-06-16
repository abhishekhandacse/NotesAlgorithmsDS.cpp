#include <bits/stdc++.h>

using namespace std;

int eqmb(int *arr,int size){
	int sum=0;
	for(int i=0;i<size;i++)
		sum+=arr[i];
	int count=0;
	for(int i=0;i<size;i++){
		sum-=arr[i];
		if(sum==count)
			return i+1;
		count+=arr[i];
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

		cout<<eqmb(arr,size)<<endl;

		
	}
return 0;}