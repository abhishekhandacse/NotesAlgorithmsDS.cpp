#include<bits/stdc++.h>

using namespace std;



string longPalSubstrOpt(string str){
	int start=0;
	int len=str.length();
	int maxlength=1;
	int low,high;
	for(int i=1;i<len;i++){
		low=i-1;
		high=i;
		
		while( low>=0 && high<len && str[low]==str[high]){
			if((high-low+1)>maxlength){
				start=low;
				maxlength=high-low+1;
			}
			--low;
			++high;
		}

		low=i-1;
		high=i+1;
		while(low>=0 && high<len && str[low]==str[high]){
			if(high-low+1>maxlength){
				start=low;
				maxlength=high-low+1;
			}
			--low;
			++high;
		}	
	}
	

	return str.substr(start,maxlength);
}

string longPalSubstr(string str){
	int n=str.length();
	bool table[n][n]={false};
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++){
			table[i][j]=false;

			if( (i)==(j+1)||(i==j))
				table[i][j]=true;
		}

	int start=0,maxlen=1;
	int len=1;
	while(len!=n){
		for(int i=0,j=len;(((i+len)<n)&&(j<n));i++,j++ ){
			// cout<<i<<" "<<j<<" ";
			if(table[i+1][j-1] && (str[i]==str[j]) ){
				table[i][j]=true;
				if(maxlen<(len+1) ){
					maxlen=len+1;
					start=i;
				}
			}

		}
		// cout<<endl;
	len++;	
	}
	

	// Testing
	// for(int i=0;i<n;i++){
	// 	for(int j=0;j<n;j++){
	// 		cout<<table[i][j]<<" ";
	// 	}
	// 	cout<<endl;
	// }
	return str.substr(start,maxlen);
}

int main(){
int tc;
cin>>tc;
while(tc--){
	string str;
	cin>>str;

	cout<<longPalSubstrOpt(str)<<endl;
}
	




return 0;}