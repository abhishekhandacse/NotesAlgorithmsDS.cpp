#include<bits/stdc++.h>
using namespace std;

bool DictContains(string str,vector<string> &dict){
	for(int i=0;i<dict.size();i++)
		if(str.compare(dict[i])==0)
			return true;
return false;
}
void print(vector<vector<bool>> &dp){
	for(int i=0;i<dp.size();i++){
		for(int j=0;j<dp.size();j++){
			// if(j>=i)
				cout<<dp[i][j]<<" ";
			// else cout<<" ";
		}
		cout<<endl;
	}
}
bool WordBreak(vector<string> &dict,string input){
	int size=input.size();

	vector<vector<bool>> dp(size,vector<bool>(size,false));

	int i,j;

	for(int l=0;l<size;l++){


		for(int m=0;(m)<size;m++){
			 i=m;
			 j=m+l;
			if(j<size){
				if(DictContains(input.substr(i,j-i+1),dict))
				dp[i][j]=true;
				else{
					for(int k=i;k<j;k++){
						if(dp[i][k] && dp[k+1][j]){
							dp[i][j]=true;
							break;
						}	
					}
				}	
			}

			
		}
	}
	// print(dp);

	return dp[0][size-1];
}



int main(){

	string dictionary[] = {"mobile","samsung","sam","sung",
                            "man","mango","icecream","and",
                             "go","i","like","ice","cream"};

    int size = sizeof(dictionary)/sizeof(dictionary[0]);             
    vector<string> dict(dictionary,dictionary+size);

    string input="ilikeg";
    cout<<WordBreak(dict,input)<<endl;






return 0;}