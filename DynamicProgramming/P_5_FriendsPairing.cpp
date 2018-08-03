#include<bits/stdc++.h>

using namespace std;

int main(){

	int tc;
	cin>>tc;
	int dp[101];
	for(int i=0;i<101;i++)
		dp[i]=-1;
	while(tc--){
		int n;
		cin>>n;
		if(dp[n]!=-1)
			cout<<dp[n]<<endl;
		else{
		for(int i=0;i<=n;i++){
			if(i<=2)
				dp[i]=i;
			else
				dp[i]=dp[i-1]+((i-1)*dp[i-2]);
		}

		cout<<dp[n]<<endl;	
		}
		

		
	}





return 0;}