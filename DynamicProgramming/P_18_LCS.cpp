#include<bits/stdc++.h>

using namespace std;

int LCS(string str1,string str2){
	int rows=str1.length();
	int cols=str2.length();

	vector<vector<int>> dp(rows+1,vector<int>(cols+1,0));

	for(int i=1;i<rows+1;i++){
		for(int j=1;j<cols+1;j++){
			if(str1[i-1]==str2[j-1])
				dp[i][j]=dp[i-1][j-1]+1;
			else dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
		}
	}

	return dp[rows][cols];
}

int main(){


int tc;
cin>>tc;
while(tc--){
	int temp;
	cin>>temp>>temp;

	string str1,str2;
	cin>>str1>>str2;

	cout<<LCS(str1,str2)<<endl;
}




return 0;}