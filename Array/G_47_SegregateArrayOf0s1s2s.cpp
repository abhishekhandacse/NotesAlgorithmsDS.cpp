#include <bits/stdc++.h>

using namespace std;

void Segregate(int *arr,int size){
	int i=-1;
	for(int j=0;j<size;j++){
		if(arr[j]==0){
			i++;
			swap(arr[i],arr[j]);}
	}
	for(int j=i+1;j<size;j++){
		if(arr[j]==1){
			i++;
			swap(arr[i],arr[j]);
		}
	}
	for(int i=0;i<size;i++)
		cout<<arr[i]<<" ";
	cout<<endl;
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

		Segregate(arr,size);

		
	}
return 0;}