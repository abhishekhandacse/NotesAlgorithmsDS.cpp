#include<bits/stdc++.h>
using namespace std;
#define MAX 26
int main(){
	int tc;
	cin>>tc;
	while(tc--){
		string str;
		cin>>str;
		int dp[str.length()][MAX];
		for(int i=0;i<str.length();i++)
			for(int j=0;j<MAX;j++)
				dp[i][j]=0;


		for(int i=0;i<str.length();i++){
			for(int j=0;j<MAX;j++){
				if(i>0)
					dp[i][j]=dp[i-1][j];	
			}
			dp[i][str[i]-'a']+=1;
		}

		int Q;
		cin>>Q;
		while(Q--){
			int l,r;
			cin>>l>>r;
			l--;r--;
			int count=0;
			if(l==0){
				for(int i=0;i<MAX;i++){
					if(dp[r][i])
						count++;
				}
			}else{
				for(int i=0;i<MAX;i++){
					if(dp[r][i]-dp[l-1][i]>0)
						count++;
				}
			}
			cout<<count<<endl;
		}



		

		// for(int i=0;i<str.length();i++){
		// 	for(int j=0;j<MAX;j++){
		// 		cout<<dp[i][j]<<" ";
		// 	}
		// 	cout<<endl;
		// }

	}



return 0;}