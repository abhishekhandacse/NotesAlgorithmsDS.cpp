#include <bits/stdc++.h>

using namespace std;


int KthElement(int *arr1,int size1,int *arr2,int size2,int K){
	// for(int i=0;i<size1;i++)
	// 	cout<<arr1[i]<<" ";

	// cout<<endl;
	// for(int i=0;i<size2;i++)
	// 	cout<<arr2[i]<<" ";
	// cout<<endl;

	int counter=0;
	int i=0,j=0,temp;
	if(K>(size1+size2))
		return -1;
	while( (i<size1) && (j<size2)){
		counter++;
		if(arr1[i]<arr2[j]){
			if(counter==K){
				temp=arr1[i];
				return temp;
			}
			i++;
			

		}else{
			if(counter==K){
				temp=arr2[j];
				return temp;
			}
			j++;
			
		}
		
	}
	while((i<size1)){
		counter++;
		if(counter==K){
				temp=arr1[i];
				return temp;
		}
		i++;
		
	}
	while((j<size2)){
		counter++;
		if(counter==K){
				temp=arr2[j];
				return temp;
		}
		j++;
	}
return temp;}

int main(){
	int tc;
	cin>>tc;
	while(tc--){
		int size1,size2,K;
		cin>>size1>>size2>>K;
		int *arr1=new int[size1];
		int *arr2=new int[size2];
		for(int i=0;i<size1;i++){
			cin>>arr1[i];
		}
		for(int i=0;i<size2;i++)
			cin>>arr2[i];
		cout<<KthElement(arr1,size1,arr2,size2,K)<<endl;

	}


	// int arr1[]={2,3,6,7,8};
	// int arr2[]={1,4,8,10};
	// int s1=(sizeof(arr1)/sizeof(int));
	// int s2=(sizeof(arr2)/sizeof(int));
	



return 0;}