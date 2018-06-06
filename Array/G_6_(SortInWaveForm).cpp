#include <bits/stdc++.h>

using namespace std;

void sortinwave(int *arr,int size){
	sort(arr,arr+size);

	// Swap adjacent elements
	int temp;
	for(int i=0;i<(size-1);i++ ){
		if( (i%2)==0){
			temp=arr[i];
			arr[i]=arr[i+1];
			arr[i+1]=temp;
		}
	}
}

int main(){
	int tc;
	cin>>tc;
	while(tc--){
		int N;
		cin>>N;
		int *arr=new int[N];
		
		for(int i=0;i<N;i++)
			cin>>arr[i];

		sortinwave(arr,N);

		for(int i=0;i<N;i++)
			cout<<arr[i]<<" ";
		cout<<endl;
	}



return 0;}