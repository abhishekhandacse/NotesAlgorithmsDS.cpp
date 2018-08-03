#include<bits/stdc++.h>
using namespace std;

int LAS(int *arr,int size){
	int dp[size];

	// memset(dp,1,sizeof(dp));
	for(int i=0;i<size;i++)
		dp[i]=1;
	int maxa=1;

	for(int i=1;i<size;i++){
		for(int j=0;j<i;j++){
			if(abs(arr[i]-arr[j])==1)
				dp[i]=max(dp[i],dp[j]+1);
		}
		if(maxa<dp[i])
			maxa=dp[i];

	}

	return maxa;
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

		cout<<LAS(arr,size)<<endl;
	}



return 0;}