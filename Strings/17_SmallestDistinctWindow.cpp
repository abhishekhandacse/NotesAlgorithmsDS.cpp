#include<bits/stdc++.h>
using namespace std;
int compare(unordered_set<char> a,unordered_set<char> b){
	for(auto it=a.begin();it!=a.end();it++){
		if(b.find((*it))==b.end())
			return 0;
	}
	return 1;
}
int main(){
	int tc;
	cin>>tc;
	while(tc--){
		string str;
		cin>>str;
		unordered_set<char> st;
		for(int i=0;i<str.length();i++)
			st.insert(str[i]);

		int largest=INT_MAX;
		string temp="";
		for(int i=0;i<str.length();i++){
			for(int j=i;j<str.length();j++){
				string substring=str.substr(i,j-i+1);
				unordered_set<char> comp(substring.begin(),substring.end());
				if(compare(st,comp) && substring.length() < largest){
					largest=substring.length();
					temp=substring;
				}
			}
		}

		cout<<temp<<endl;

	}




return 0;}