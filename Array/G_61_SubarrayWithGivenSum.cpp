#include <bits/stdc++.h>

using namespace std;
// 1. Brute Force Time Comp O(N^2)
int SubarrayWithGivenSum(int *arr,int size,int sum){
	int curr_sum=0;
	for(int i=0;i<size;i++){
		curr_sum=0;
		for(int j=i;j<size;j++){
			curr_sum+=arr[j];
			if(curr_sum==sum){
				cout<<i+1<<" "<<j+1<<endl;
				return 1;
			}
		}
	}
	return 0;
}
// 2. Optimized Soltion O(N)
int SubarrayWithGivenSumOpt(int *arr,int size,int sum){
	int curr_sum=arr[0];
	int start=0;
	for(int i=1;i<=size;i++){
		while(curr_sum>sum && start<i)
			curr_sum-=arr[start++];
		if(curr_sum==sum){
			cout<<start+1<<" "<<i<<endl;
			return 1;
		}
		if(i<size)
			curr_sum+=arr[i];
	}
	return 0;	
}

int main(){
	int tc;
	cin>>tc;


	while(tc--){
		int size,sum;
		cin>>size>>sum;
		
		int *arr=new int[size];
		for(int i=0;i<size;i++)
			cin>>arr[i];
		
		int ans=SubarrayWithGivenSum(arr,size,sum);
		// int ans=SubarrayWithGivenSumOpt(arr,size,sum);
		if(!ans)
			cout<<-1<<endl;

		
	}
return 0;}