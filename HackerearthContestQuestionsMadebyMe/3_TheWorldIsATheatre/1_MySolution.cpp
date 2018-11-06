#include<bits/stdc++.h>

using namespace std;
#define ROW 31
#define COL 31
typedef unsigned long long int lint;

void GenerateDPtable(lint **dp){

	dp[0][0]=1;

	for(lint i=0;i<ROW;i++)
		for(lint j=0;j<=i;j++){
			if(j==0){
				dp[i][j]=1;
				continue;
			}

			dp[i][j]=dp[i-1][j-1] + dp[i-1][j];
		}


}

int main(){

	lint **dp=new lint*[ROW];
	for(lint i=0;i<ROW;i++)
		dp[i]=new lint[ROW];

	int tc;
	cin>>tc;
	while(tc--){
		lint n,m,t;
		cin>>n>>m>>t;

		GenerateDPtable(dp);

		lint ans=0,temp1,temp2;

		for(lint i=4;i<=n;i++){
			if( (t-i) <1 )	break;
			if((t-i)>m)continue;
			temp1=dp[n][i];
			temp2=dp[m][t-i];
			ans+= temp1 * temp2;
		
		}

		cout<<ans<<endl;	
	}

	



	return 0;}