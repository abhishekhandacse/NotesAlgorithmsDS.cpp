#include <bits/stdc++.h>

using namespace std;

void print(int *arr1,int size){
	for(int i=0;i<size;i++)
		cout<<arr1[i]<<" ";
	cout<<endl;
}
void preprocess(int *arr1,int *arr2,int size1,int size2){
	for(int i=0;i<size1-1;i++){
		if(arr1[i]==arr1[i+1])
			arr1[i]=INT_MAX;
	}
	for(int i=0;i<size2-1;i++){
		if(arr2[i]==arr2[i+1]){
			arr2[i]=INT_MAX;
		}
	}
	// print(arr1,size1);
	// print(arr2,size2);
}
void Intersection(int *arr1,int *arr2,int size1,int size2){
	int i=0,j=0;
	while(i<size1  &&  j<size2){
		if(arr1[i]<arr2[j]){
			i++;
		}else if (arr1[i]>arr2[j]){
			j++;
		}else{
			cout<<arr1[i++]<<" ";
			j++;
		}
	}
	cout<<endl;
}



void Union2Arrays(int *arr1,int *arr2,int size1,int size2){
	preprocess(arr1,arr2,size1,size2);
	int i=0,j=0;
	while((i<size1) && (j<size2)){
		if(arr1[i]==INT_MAX ){
			i++;continue;
		}
		if(arr2[j]==INT_MAX){
			j++;continue;
		}

		if(arr1[i]<arr2[j]){
			cout<<arr1[i++]<<" ";
		}else if(arr1[i]>arr2[j]){
			cout<<arr2[j++]<<" ";
		}else{
			cout<<arr2[j++]<<" ";
			i++;
		}
	}
	while(i<size1){
		if(arr1[i]==INT_MAX ){
			i++;continue;
		}
		
		
		cout<<arr1[i++]<<" ";
	}
	while(j<size2){
		if(arr2[j]==INT_MAX){
			j++;continue;
		}
		cout<<arr2[j++]<<" ";
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
		
		sort(arr1,arr1+size1);
		sort(arr2,arr2+size2);
		// Union2Arrays(arr1,arr2,size1,size2);
		Intersection(arr1,arr2,size1,size2);
	}
return 0;}