#include<bits/stdc++.h>

using namespace std;


int sumtoN(int *arr,int size,int N){
	vector<int> dp(N+1,0);
	dp[0]=1;

	for(int i=1;i<(N+1);i++)
		for(int j=0;j<size;j++)
			if(i>=arr[j])
				dp[i]+=dp[i-arr[j]];


return dp[N];}

int main(){
	int tc;
	cin>>tc;
	while(tc--){
		int size,N;
		cin>>size>>N;
		int arr[size];
		for(int i=0;i<size;i++)
			cin>>arr[i];

		cout<<sumtoN(arr,size,N);
	}
return 0;}