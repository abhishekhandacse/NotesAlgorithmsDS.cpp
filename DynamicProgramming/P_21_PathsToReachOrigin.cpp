#include<bits/stdc++.h>
using namespace std;


int paths(int x,int y){
	vector<vector<int>> dp(x+1,vector<int>(y+1,0));
	for(int i=0;i<(x+1);i++)
		dp[i][0]=1;

	for(int i=0;i<(y+1);i++)
		dp[0][i]=1;

	for(int i=1;i<(x+1);i++){
		for(int j=1;j<(y+1);j++){
			dp[i][j]=dp[i-1][j]+dp[i][j-1];
		}
	}

	return dp[x][y];

}

int main(){
	int tc;
	cin>>tc;
	while(tc--){
		int x,y;
		cin>>x>>y;

		cout<<paths(x,y)<<endl;
	}



return 0;}