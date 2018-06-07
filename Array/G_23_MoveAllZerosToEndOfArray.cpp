#include <bits/stdc++.h>

using namespace std;


void movezerosright(int *arr,int size){
	int i=-1;

	for(int j=0;j<size;j++){
			if(arr[j]>0){
				i++;
				swap(arr[i],arr[j]);
			}
		}
}
void print(int *arr,int size){
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

		movezerosright(arr,size);

		print(arr,size	);
	}


return 0;}