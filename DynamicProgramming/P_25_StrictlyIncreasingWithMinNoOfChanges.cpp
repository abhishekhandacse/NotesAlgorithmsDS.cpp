#include<bits/stdc++.h>

using namespace std;


int LCS_Min_Changes(int *arr,int size){
	vector<int> dp(size,1);

	for(int i=1;i<size;i++){
		for(int j=0;j<i;j++)
			if(arr[j]<arr[i])
				dp[i]=max(dp[i],dp[j]+1);
	}
	return dp[size-1];
}

int main(){
	int tc;
	cin>>tc;
	while(tc--){
		int size;
		cin>>size;
		int arr[size];

		for(int i=0;i<size;i++)
			cin>>arr[i];

		cout<<size-LCS_Min_Changes(arr,size)<<endl;

	}





return 0;}