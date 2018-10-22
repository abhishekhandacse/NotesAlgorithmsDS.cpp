#include<bits/stdc++.h>

using namespace std;


int NoOfWays(int N){
	
	if(N<=3)
		return 1;
	vector<int> dp(N+1,1);

	for(int i=4;i<(N+1);i++)
		dp[i]=dp[i-1]+dp[i-4];

	return dp[N];
}

int main(){

	int tc;
	cin>>tc;

	while(tc--){
		int N;
		cin>>N;

		cout<<NoOfWays(N)<<endl;
	}






return 0;}