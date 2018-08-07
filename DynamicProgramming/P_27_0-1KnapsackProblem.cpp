#include<bits/stdc++.h>
using namespace std;

static auto _____ = []() {
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

int ZeroOne(vector<int> &wt,vector<int> &val,int W){
	int rows=wt.size()+1;
	int cols=W+1;

	vector<vector<int>> dp(rows,vector<int>(cols,0));

	for(int i=1;i<rows;i++){
		for(int j=1;j<cols;j++){

			if(j-wt[i-1]>=0){
				// Inclusion
				dp[i][j]=max(val[i-1]+dp[i][j-wt[i-1]],dp[i-1][j]);
			}else dp[i][j]=max(dp[i][j],dp[i-1][j]);
		}
	}

	// for(auto i:dp){
	// 	for(auto j:i){
	// 		cout<<j<<" ";
	// 	}
	// 	cout<<endl;
	// }
	return dp[rows-1][cols-1];
}

int main(){
	int tc;
	cin>>tc;

	while(tc--){
		int size,W;
		cin>>size>>W;
		vector<int> wt(size);
		vector<int> val(size);
		for(int i=0;i<size;i++)
			cin>>val[i];
		for(int i=0;i<size;i++)
			cin>>wt[i];

		cout<<ZeroOne(wt,val,W)<<endl;
	}




return 0;}