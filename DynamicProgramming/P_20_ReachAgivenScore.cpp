#include<bits/stdc++.h>

using namespace std;

static auto _____ = []() {
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();
int CoinChanging(int N){

	vector<int> dp(N+1,0);
	dp[0]=1;
	int arr[]={3,5,10};
	for(int i=0;i<3;i++){
		for(int j=1;j<(N+1);j++){
			if( (j-arr[i])>=0 )
				dp[j]+=dp[j-arr[i]];
		}
	}

	return dp[N];
}

int main(){

	int tc;
	cin>>tc;

	while(tc--){
		int N;
		cin>>N;

		cout<<CoinChanging(N)<<endl;
	}


return 0;}