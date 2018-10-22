#include<bits/stdc++.h>

using namespace std;

int minjumps(int *arr,int size) {
	vector<int> dp(size,INT_MAX);
	dp[0]=0;
	
	
	for(int i=1;i<size;i++){
		for(int j=0;j<i;j++){
			if( ((arr[j]+j) >= i) ){
				dp[i]=min(dp[i],dp[j]+1);
			}
		}
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

		cout<<minjumps(arr,size)<<endl;
	}





return 0;}