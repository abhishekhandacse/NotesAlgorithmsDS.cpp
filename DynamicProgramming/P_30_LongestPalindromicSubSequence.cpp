#include <bits/stdc++.h>

using namespace std;

int LongestPalinSS(string str){
	int size=str.size();

	vector<vector<int>> dp(size,vector<int>(size,0));
	for(int i=0;i<size;i++)
		dp[i][i]=1;
	int i,j;
	for(int l=1;l<size;l++){
		for(int m=0; ((m+l) <size);m++){
			i=m;
			j=m+l;

			if(str[i]==str[j])
				dp[i][j]+=dp[i+1][j-1]+2;
			else dp[i][j]=max(dp[i+1][j],dp[i][j-1]);
		}
	}
	return dp[0][size-1];
}

int main(){

	int tc;
	cin>>tc;
	while(tc--){
		string str;
		cin>>str;

		cout<<LongestPalinSS(str)<<endl;
	}


return 0;}