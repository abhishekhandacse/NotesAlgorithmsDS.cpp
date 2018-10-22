#include<bits/stdc++.h>
using namespace std;

int longestLCS(string str1,string str2){
	int m=str1.length(),n=str2.length();

	int dp[m+1][n+1];

	for(int i=0;i<=m;i++){
		for(int j=0;j<=n;j++){
			dp[i][j]=0;
		}
	}

	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			if(str1[i-1]==str2[j-1])
				dp[i][j]=dp[i-1][j-1]+1;
			else
				dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
		}
	}

	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			cout<<dp[i][j]<<" ";
		}
		cout<<endl;
	}

return dp[m][n];
}

int main(){
	int tc;
	cin>>tc;
	while(tc--){
		string str1,str2;
		int a,b;
		cin>>a>>b;
		cin>>str1>>str2;

		cout<<longestLCS(str1,str2)<<endl;
	}





return 0;}