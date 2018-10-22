#include<bits/stdc++.h>

using namespace std;


int MinNoOfCoins(vector<int> &coins,int value){
	vector<vector<int>> dp(coins.size()+1,vector<int>(value+1,INT_MAX));

	// Make First column as zero

	for(int i=0;i<(coins.size()+1);i++)
		dp[i][0]=0;

	// Main DP logic of incl and excl

	for(int i=1;i<(coins.size()+1);i++){
		for(int j=1;j<(value+1);j++){
			if((coins[i-1]>j) || (dp[i][j-coins[i-1]]==INT_MAX) ){
				dp[i][j]=dp[i-1][j];
			}else 
				dp[i][j]=min(dp[i-1][j],dp[i][j-coins[i-1]]+1);
			
		}
	}
	// -> Tesinting Only <- Uncomment to see matrix
	/*for(auto i:dp){
		for(auto j:i){
			cout<<j<<" ";
		}
		cout<<endl;
	}*/
	return dp[coins.size()][value];
}

int main(){

	int tc;
	cin>>tc;
	while(tc--){
		int size,value;
		cin>>value>>size;

		vector<int> coins(size);
		for(int i=0;i<size;i++)
			cin>>coins[i];

		cout<<MinNoOfCoins(coins,value);
	}






return 0;}