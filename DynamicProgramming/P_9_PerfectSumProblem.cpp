#include<bits/stdc++.h>

using namespace std;


int countsubsetsDP(int *arr,int size,int sum){
	int dp[size][sum+1];
	// Making all elements of the table as 0
	for(int i=0;i<size;i++){
		for(int j=0;j<(sum+1);j++){
			dp[i][j]=0;
		}
	}
	// Making first column as 1
	for(int i=0;i<size;i++)
		dp[i][0]=1;

	// Main table filling login starts

	for(int i=0;i<size;i++){
		for(int j=1;j<(sum+1);j++){
			if(i==0){
				if(j==arr[i])
					dp[i][j]=1;
			}else{
				
				 if( ((j-arr[i])>=0) && dp[i-1][j-arr[i]]){
					dp[i][j]=dp[i-1][j-arr[i]];
				}
				dp[i][j]+=dp[i-1][j];
			}
		}
	}

	// for(int i=0;i<size;i++){
	// 	for(int j=0;j<(sum+1);j++){
	// 		cout<<dp[i][j]<<" ";
	// 	}
	// 	cout<<endl;
	// }

	return dp[size-1][sum];

}

void countsubsets(int *arr,int size,int sum,int &ans,int count=0){
	if(sum==0){
		ans+=1;
		return;
	}
	if(sum<0)return;
	if(size==count)
		return;

	countsubsets(arr,size,sum-arr[count],ans,count+1);
	countsubsets(arr,size,sum,ans,count+1);
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

		int sum;
		cin>>sum;
		int ans=0;

		// countsubsets(arr,size,sum,ans);

		// cout<<ans<<endl;

		cout<<countsubsetsDP(arr,size,sum)<<endl;
	}





return 0;}