#include<bits/stdc++.h>

using namespace std;


int LargestZigZagSum(vector<vector<int>> &Mat){
	int size=Mat.size();
	vector<vector<int>> dp(size,vector<int>(size+2,0));

	for(int i=0;i<size;i++)
		dp[0][i+1]=Mat[0][i];

	int maximum=0;

	for(int i=1;i<size;i++){
		for(int j=1;j<(size+1);j++){
			int maxele=0;
			for(int k=1;(k<size+1);k++)
				if((k!=j) && maxele<dp[i-1][k])
					maxele=dp[i-1][k];
			dp[i][j]=Mat[i][j-1]+maxele;



			if(maximum<dp[i][j])
				maximum=dp[i][j];
		}
	}

	// for(int i=0;i<size;i++){
	// 	for(int j=0;j<size+2;j++){
	// 		cout<<dp[i][j]<<"   ";
	// 	}
	// 	cout<<endl;
	// }
return maximum;
}


int main(){


	int tc;
	cin>>tc;
	while(tc--){
		int size;
		cin>>size;
		vector<vector<int>> Mat(size,vector<int>(size));

		for(int i=0;i<size;i++)
			for(int j=0;j<size;j++)
				cin>>Mat[i][j];
		
		cout<<LargestZigZagSum(Mat)<<endl;
	}





return 0;}