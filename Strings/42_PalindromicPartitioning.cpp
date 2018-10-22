#include<bits/stdc++.h>

using namespace std;


int PalinPart(string str){
	int n=str.length();
	bool isP[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			isP[i][j]=false;

			if( (i==j) || ( (i)==(j+1) ))
				isP[i][j]=true;
		}
	}
// Fill the isP Matrix to mark all palindrome substrings
	int length=1;
	while(length!=n){
		for(int i=0,j=length;((i<n)&&(j<n));i++,j++){
			if( (str[i]==str[j]) && isP[i+1][j-1])
				isP[i][j]=true;
		}
		length++;
	}
// Printing the boolean matrix
	// for(int i=0;i<n;i++){
	// 	for(int j=0;j<n;j++){
	// 		cout<<isP[i][j]<<" ";
	// 	}
	// 	cout<<endl;
	// }

// Now Apply DP again to find minimum number of cuts
	int count[n]={INT_MAX};
	for(int i=0;i<n;i++){
		if(isP[0][i]){
			count[i]=0;
		}else{
			count[i]=INT_MAX;
			for(int j=0;j<i;j++){
				if(isP[j+1][i] && ((1+count[j])<count[i]) )
					count[i]=1+count[j];
			}
		}
	}
return count[n-1];}

int main(){

int tc;
cin>>tc;
while(tc--){
	string str;
	cin>>str;

	cout<<PalinPart(str)<<endl;


}
	


return 0;}