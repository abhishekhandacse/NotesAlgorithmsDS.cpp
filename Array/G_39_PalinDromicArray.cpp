#include <bits/stdc++.h>

using namespace std;

int MaxPalSequence(int *arr,int size){
	int ans=0;
	for(int i=0,j=size-1 ; i<=j;){
		if(arr[i]==arr[j]){i++;j--;}
		else if(arr[i]>arr[j]){
			j--;
			arr[j]+=arr[j+1];
			ans++;
		}else{
			i++;
			arr[i]+=arr[i-1];
			ans++;
		}
	}
	return ans;
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

		cout<<MaxPalSequence(arr,size)<<endl;

		
	}
return 0;}