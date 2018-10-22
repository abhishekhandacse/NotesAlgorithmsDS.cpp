#include <bits/stdc++.h>

using namespace std;


bool subsetsum(int *arr,int size,int sum){
	sort(arr,arr+size);

	bool dp[size][sum+1];
	for(int i=0;i<size;i++)
		for(int j=0;j<sum+1;j++)
			dp[i][j]=false;

	for(int i=0;i<size;i++)
		dp[i][0]=true;

	// Actual logic of DP starts

	for(int i=0;i<size;i++){
		for(int j=1;j<(sum+1);j++){
			if(i==0){
				if(j==arr[i])
					dp[i][j]=true;
			}else{
				if(arr[i]>j)//Not participating
					dp[i][j]=dp[i-1][j];
				else if( ((j-arr[i])>=0)  && dp[i-1][j-arr[i]]   )
					dp[i][j]=true;
			}
		}
	}

	for(int i=0;i<size;i++){
		for(int j=0;j<sum+1;j++){
			cout<<dp[i][j]<<" ";
		}
		cout<<endl;
	}


	return dp[size-1][sum];
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
		int sum=0;
		cin>>sum;
		cout<<subsetsum(arr,size,sum)<<endl;
	}



return 0;}