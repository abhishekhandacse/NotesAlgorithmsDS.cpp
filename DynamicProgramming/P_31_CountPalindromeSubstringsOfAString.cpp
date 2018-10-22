#include<bits/stdc++.h>
using namespace std;

int CountSubStrings(string str){
	int size=str.size();
	vector<vector<bool>> dp(size,vector<bool>(size,false));

	for(int i=0;i<size;i++){
		dp[i][i]=true;
		if(i<size-1)
			dp[i+1][i]=true;
	}
	int i,j,count=0;
	for(int l=1;l<size;l++){
		for(int m=0;((l+m)<size);m++){
			i=m;
			j=l+m;
			if(str[i]==str[j]  && dp[i+1][j-1]){
				count++;
				dp[i][j]=true;
			}
		}
	}
	return count;
}

int main(){

	int tc;
	cin>>tc;
	while(tc--){
		int size;
		cin>>size;
		string str;
		cin>>str;

		cout<<CountSubStrings(str)<<endl;
	}





return 0;}