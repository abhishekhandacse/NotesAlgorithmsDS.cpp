#include <bits/stdc++.h>

using namespace std;

void print(int *arr,int size){
	for(int i=0;i<size;i++)
		cout<<arr[i]<<" ";
	cout<<endl;
}

void organise(int *arr,int size){
	for(int i=0;i<size;i++){
		if(arr[i]!=i){
			for(int j=0;j<size;j++){
				if(i==arr[j]){
					swap(arr[i],arr[j]);
				}
			}
		}
	}
}
void hashing(int *arr,int size){
	unordered_set<int> st;
	int max=INT_MIN;
	for(int i=0;i<size;i++){
		if(max<arr[i])
			max=arr[i];
		st.insert(arr[i]);
	}
	for(int i=0;i<=max;i++)
		if(st.find(i)==st.end()){
			arr[i]=-1;
		}else arr[i]=i;

	for(int i=max+1;i<size;i++){
		arr[i]=-1;
	}


}

int main(){

	int arr[]={-1,-1,6,1,9,3,2,-1,4,-1};
	int size=sizeof(arr)/sizeof(int);

	// organise(arr,size);
	hashing(arr,size);
	print(arr,size);





return 0;}