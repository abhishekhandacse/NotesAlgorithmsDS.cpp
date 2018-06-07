#include <bits/stdc++.h>

using namespace std;

int minswaps(int *arr,int size,int k){
	int good=0,badmin=INT_MAX;

	for(int i=0;i<size;i++){
		if(arr[i]<=k){
			good++;
		}
	}
	int badinwindow=0;
	for(int i=0;i<good;i++)
		if(arr[i]>k)badinwindow++;

	for(int i=1;(i+good)<=size;i++){

		if(badmin>badinwindow)
			badmin=badinwindow;

		if(arr[i-1]>k) badinwindow--;

		if(arr[i+good-1]>k) badinwindow++;
	}

	return min(badinwindow,badmin);
	
}

int main(){

	int tc;
	cin>>tc;
	while(tc--){
		int size,k;
		cin>>size;
		int *arr=new int[size];
		for(int i=0;i<size;i++)
			cin>>arr[i];

		cin>>k;

		cout<<minswaps(arr,size,k)<<endl;

		// print(arr,size	);
	}


return 0;}