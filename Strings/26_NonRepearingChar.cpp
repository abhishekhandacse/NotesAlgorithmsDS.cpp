#include<bits/stdc++.h>

using namespace std;


string firstNonRep(string str){
	int hm[26]={0};

	for(int i=0;i<str.length();i++){
		hm[str[i]-'a']+=1;
	}
	string ans="-1";
	for(int i=0;i<str.length();i++){
		if(hm[str[i]-'a']==1){
			ans=str[i];
			break;
		}
	}

	return ans;

}


int main(){

	int tc;
	cin>>tc;
	while(tc--){
		string str;
		int num;
		cin>>num;
		cin>>str;

		cout<<firstNonRep(str)<<endl;
	}






return 0;}