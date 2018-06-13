#include <bits/stdc++.h>

using namespace std;

int InvCount(int *arr,int size){
	
	int count=0;
	for(int i=0;i<size;i++){
		for(int j=i+1;j<size;j++){
			if(arr[i]>arr[j])
				count++;
		}
	}
	return count;
}


int main(){
	int tc;
	cin>>tc;


	while(tc--){
		int size,x;
		cin>>size;
		int *arr1=new int[size];
		
		for(int i=0;i<size;i++)
			cin>>arr1[i];
		

		cout<<InvCount(arr1,size)<<endl;

		
	}
return 0;}