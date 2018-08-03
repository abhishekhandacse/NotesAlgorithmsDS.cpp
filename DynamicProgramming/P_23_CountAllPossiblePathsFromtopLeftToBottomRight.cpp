#include<bits/stdc++.h>
#define MOD 1000000007
using namespace std;

int allPaths(int n,int m){
	vector<vector<int>> dp(n,vector<int>(m,1));

	for(int i=1;i<n;i++){
		for(int j=1;j<m;j++)
			dp[i][j]=((dp[i-1][j]+dp[i][j-1])%MOD);
	}
	return dp[n-1][m-1];
}

int main(){

	int tc;
	cin>>tc;
	while(tc--){
		int n,m;
		cin>>n>>m;

		cout<<allPaths(n,m)<<endl;
	}




return 0;}