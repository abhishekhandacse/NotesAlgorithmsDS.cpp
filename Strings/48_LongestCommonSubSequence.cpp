#include<bits/stdc++.h>
using namespace std;

int longestLCS(string str1,string str2){
	int m=str1.length(),n=str2.length();

	int dp[m+1][n+1];

	for(int i=0;i<=m;i++){
		for(int j=0;j<=n;j++){
			dp[i][j]=0;
		}
	}

	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			if(str1[i-1]==str2[j-1])
				dp[i][j]=dp[i-1][j-1]+1;
			else
				dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
		}
	}

	// for(int i=1;i<=m;i++){
	// 	for(int j=1;j<=n;j++){
	// 		cout<<dp[i][j]<<" ";
	// 	}
	// 	cout<<endl;
	// }

return dp[m][n];
}
void addinset(string str1,string str2,set<string> &st,int len,string temp="",int i=0,int j=0){

	if( (i-1==str1.length()) || (j-1==str2.length()) )return;

	if((temp.length())==len){
		st.insert(temp);
		// cout<<temp<<endl;
		return;
	}
		
		
	


	if(str1[i]==str2[j]){
		// cout<<str1[i]<<" "<<str2[j]<<" "<<temp<<endl;
		addinset(str1,str2,st,len,temp+str1[i],i+1,j+1);
	}
	else{
		addinset(str1,str2,st,len,temp,i,j+1);
		addinset(str1,str2,st,len,temp,i+1,j);

	}
}
int AllLCS(string str1,string str2,set<string> &st){
	int len=longestLCS(str1,str2);
	// cout<<len<<endl;
	addinset(str1,str2,st,len);
}

int main(){
	int tc;
	cin>>tc;
	while(tc--){
		string str1,str2;
		// int a,b;
		// cin>>a>>b;
		cin>>str1>>str2;
		set<string> st;
		cout<<AllLCS(str1,str2,st)<<endl;
		for(auto it=st.begin()+1;it!=st.end();it++)
			cout<<(*it)<<endl;
	}





return 0;}