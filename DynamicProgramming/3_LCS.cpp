// Naive Solution
#include <bits/stdc++.h>
using namespace std;

int LCS(char *X,char *Y,int m,int n){
	if(m==0 || n==0)
		return 0;

	if(X[m-1]==Y[n-1]){//If there is match
		return 1 + LCS(X,Y,m-1,n-1);

	}else{
		return max( LCS(X,Y,m,n-1),LCS(X,Y,m-1,n) );
	}

}
// Naive Solution
// Time Complexity-: Exp
// Space Complexity-:O(N)(due to recursive stack)

//// Solution using Dynamic Programing

int LCS_DP(char *X,char *Y,int m,int n){
	int str[m+1][n+1];

	for(int i=0;i<=m;i++){
		for(int j=0;j<=n;j++){

			if(i==0 || j==0){
				str[i][j]=0;
				continue;
			}

			if(X[i-1]==Y[j-1]){
				str[i][j]=str[i-1][j-1] + 1;
			}else{
				str[i][j]=max(str[i-1][j],str[i][j-1]);
			}

		}
	}
	void print_ARR(int *arr,int rows,int cols);
	print_ARR((int *)str,m+1,n+1);
	return str[m][n];
}
//Time COmplexity-:O(N^2)
// Space Complexity-:O(N^2)


//DP 2d Array Printing function
void print_ARR(int *arr,int rows,int cols){
	for(int i=0;i<rows;i++){
		for(int j=0;j<cols;j++){
			cout<<arr[j+i*cols]<<" ";
		}
	cout<<endl;
	}
}

int main(){
	char X[]="AGGTAB";
	char Y[]="GXTXAYB";
	int m=strlen(X);
	int n=strlen(Y);
	cout<<endl<<endl;
	cout<<LCS(X,Y,m,n)<<endl;
	cout<<LCS_DP(X,Y,m,n);
return 0;}