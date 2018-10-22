#include<iostream>
using namespace std;

int commonss(string a, string b){
    int rows=b.length();
    int cols=a.length();

    int dp[rows+1][cols+1];
    for(int i=0;i<=rows;i++)
    	for(int j=0;j<=cols;j++)
    		dp[i][j]=0;

    for(int i=0;i<=rows;i++)
    	dp[i][0]=0;
    for(int i=0;i<=cols;i++)
    	dp[0][i]=1;

    for(int i=1;i<=rows;i++){
    	for(int j=1;j<=cols;j++){
    		if(b[i-1]==a[j-1]){
    			dp[i][j]=dp[i-1][j-1]+dp[i][j-1];
    		}else
    			dp[i][j]=dp[i][j-1];
    	}
    }
    return dp[rows][cols];
}


int main(){

	int tc;
	cin>>tc;
	while(tc--){
		string str1,str2;
		int a,b;
		cin>>a>>b;
		cin>>str1>>str2;
		cout<<commonss(str1,str2)<<endl;
	}







return 0;}