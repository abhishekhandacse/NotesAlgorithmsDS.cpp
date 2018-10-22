#include<bits/stdc++.h>
using namespace std;

// Even Greedy solution possible

// Refer GFG


//-----------------
int maxchain(vector<pair<int,int>> &vect){
	vector<int> dp(vect.size(),1);

	int maxa=1;

	for(int i=1;i<(vect.size());i++){
		for(int j=0;j<i;j++){
			// Compatibilty check
			if(  vect[j].second < vect[i].first  ){
				dp[i]=max(dp[i],dp[j]+1);
			}
		}
		if(maxa<dp[i])
			maxa=dp[i];
	}
	return maxa;
}

int main(){

	int tc;
	cin>>tc;
	while(tc--){
		int size;
		cin>>size;
		vector<pair<int,int>> vect;
		int a,b;
		while(size--){
			cin>>a>>b;
			pair<int,int> p(a,b);
			vect.push_back(p);
		}

		cout<<maxchain(vect)<<endl;
	}






return 0;}