#include<bits/stdc++.h>

using namespace std;

#define INT_MAXX 1000000
int KS(int *arr,int size,int W){
 	
 	vector<int> val, wt;
 
    // traverse the original cost[] array and skip
    // unavailable packets and make val[] and wt[]
    // array. size variable tells the available number
    // of distinct weighted packets
    int s = 0;
    for (int i=0; i<size; i++)
    {
        if (arr[i]!= -1)
        {
            val.push_back(arr[i]);
            wt.push_back(i+1);
            s++;
        }
    }










	vector<vector<int>> dp(W+1,vector<int>(s+1,0));
	for(int i=0;i<(W+1);i++)
		dp[i][0]=INT_MAXX;

	
	// for(int i=0;i<=W;i++){
	// 	for(int j=0;j<=s;j++){
	// 		cout<<dp[i][j]<<"           ";
	// 	}
	// 	cout<<endl;
	// }

	for(int i=1;i<(W+1);i++){

		for(int j=1;j<(s+1);j++){
			


			if(i>=wt[j-1]){
				dp[i][j]=min(dp[i][j-1],
						val[j-1]+dp[i-wt[j-1]][j]
							 // ((i/wt[j-1])*val[j-1])+dp[(i%wt[j-1])][j]
					);
			}else dp[i][j]=dp[i][j-1];

			
		}
	}


	if(dp[W][s]==INT_MAXX)
		return -1;
	else return dp[W][s];
}

int main(){

	int tc;
	cin>>tc;

	while(tc--){
		int size,W;
		cin>>size>>W;

		int arr[size];
		for(int i=0;i<size;i++)
			cin>>arr[i];


		cout<<KS(arr,size,W)<<endl;
	}









return 0;}