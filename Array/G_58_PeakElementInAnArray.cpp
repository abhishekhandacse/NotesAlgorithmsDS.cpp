#include <bits/stdc++.h>

using namespace std;

int PeakEle(int *arr,int n){
	int ele=arr[0];
	for(int i=1;i<n-1;i++){
		if(arr[i]>arr[i-1]  &&  arr[i]>arr[i+1]){
			ele=i;
			break;
		}
	}
	return ele;
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

		int ans=PeakEle(arr,size);
		if(ans==-1)
			cout<<"NO Majority Element"<<endl;
		else cout<<ans<<endl;

		
	}
return 0;}