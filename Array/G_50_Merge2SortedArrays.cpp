#include <bits/stdc++.h>

using namespace std;


void preprocess(int *arr1,int *arr2,int size1,int size2){
	for(int i=0;i<(size1-1);i++){
		if(arr1[i]==arr1[i+1])
			arr1[i]=INT_MAX;
	}
	for(int i=0;i<(size2-1);i++){
		if(arr2[i]==arr2[i+1])
			arr2[i]=INT_MAX;
	}
}

void Merge2Sorted(int *arr1,int *arr2,int size1,int size2){
// 	preprocess(arr1,arr2,size1,size2);
	int i=size1-1,j=size2-1;

	while( (i>=0)  &&  (j>=0) ){
		if(arr1[i]==INT_MAX){
			i--;continue;
		}
		if(arr2[j]==INT_MAX){
			j--;continue;
		}
		if(arr1[i]<arr2[j])
			cout<<arr2[j--]<<" ";
		else
			cout<<arr1[i--]<<" ";
// 		else{
// 			cout<<arr1[i--]<<" ";
// 			j--;
// 		}
	}
		while(i>=0){
			if(arr1[i]==INT_MAX){
			i--;continue;
		}
			cout<<arr1[i--]<<" ";
	}


		while(j>=0){
			if(arr2[j]==INT_MAX){
			j--;continue;
		}
			cout<<arr2[j--]<<" ";
	}

	cout<<endl;
}

int main(){
	int tc;
	cin>>tc;
	while(tc--){
		int size1,size2;
		cin>>size1>>size2;
		int *arr1=new int[size1];
		int *arr2=new int[size2];
		for(int i=0;i<size1;i++)
			cin>>arr1[i];

		for(int i=0;i<size2;i++)
			cin>>arr2[i];
        
		Merge2Sorted(arr1,arr2,size1,size2);
	}





return 0;}