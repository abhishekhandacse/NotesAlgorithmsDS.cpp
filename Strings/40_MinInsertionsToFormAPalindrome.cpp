#include<bits/stdc++.h>

using namespace std;


int findmin(string str){
	int table[str.length()][str.length()]={0};

	for(int gap=1;gap<str.length();gap++){
		for(int l=0,h=gap;h<str.length();l++,h++){
			table[l][h]=(str[l]==str[h])?table[l+1][h-1]:(min(table[l][h-1],table[l+1][h])+1);

		}
	}
	return table[0][str.length()-1];
}

int main(){

	int tc;
	cin>>tc;
	while(tc--){
		string str;
		cin>>str;

		cout<<findmin(str)<<endl;
	}




return 0;}