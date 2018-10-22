#include<bits/stdc++.h>

using namespace std;


int sumwoa(int *arr,int size){
	int excl=0,incl=0;

	int sum=0;
	for(int i=0;i<size;i++){
		// Exlusion
			sum=max(incl,excl+arr[i]);
		// inclusion
			int temp=excl;
			excl=max(incl,temp);
			incl=temp+arr[i];
	}

	return sum;

}

int main(){


	int tc;
	cin>>tc;
	while(tc--){
		int size;
		cin>>size;
		int arr[size];

		for(int i=0;i<size;i++)
			cin>>arr[i];

		cout<<sumwoa(arr,size)<<endl;
	}







return 0;}