#include <bits/stdc++.h>
using namespace std;

void print(int *arr,int size){
	cout<<endl;
	for(int i=0;i<size;i++)
		cout<<arr[i]<<" ";
	cout<<endl;
}

int LBS(int *arr,int size){
	if(size==0)return 0;
	int *inc=new int[size];
	int *dec=new int[size];
	for(int i=0;i<size;i++){
		inc[i]=1;
		dec[i]=1;
	}

	int count=0;

	for(int i=1;i<size;i++){
		count=1;
		for(int j=0;j<i;j++){
			if(arr[j]<arr[i]){
				count=inc[j]+1;
				inc[i]=max(inc[i],count);
			}
		}
		
	}

	count=0;
	for(int i=size-2;i>=0;i--){
		count=1;
		for(int j=size-1;j>i;j--){
			if(arr[j]<arr[i]){
				count=dec[j]+1;
				dec[i]=max(dec[i],count);
			}
		}
		dec[i]=max(dec[i],count);
	}
	// print(inc,size);
	// print(dec,size);
	int max=0;
	for(int i=0;i<size;i++){
		if(max< (inc[i]+dec[i]) ){
			max=inc[i]+dec[i];
		}
	}
	return max-1;
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

		cout<<LBS(arr,size)<<endl;
	}




return 0;}