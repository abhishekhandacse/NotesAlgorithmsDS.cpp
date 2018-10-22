#include<bits/stdc++.h>

using namespace std;


int main(){
	int tc;
	cin>>tc;

	while(tc--){
		string str1,str2;
		cin>>str1>>str2;

		unordered_map<char,int> mp1;
		unordered_map<char,int> mp2;

		for(int i=0;i<str1.length();i++){
			if(mp1.find(str1[i])==mp1.end())
				mp1.insert(make_pair(str1[i],1));
			else{
				int val=((mp1.find(str1[i]))->second);
				val++;
				mp1.erase(str1[i]);
				mp1.insert(make_pair(str1[i],val));
			}
		}

		for(int i=0;i<str2.length();i++){
			if(mp2.find(str2[i])==mp2.end())
				mp2.insert(make_pair(str2[i],1));
			else{
				int val=(mp2.find(str2[i]))->second;
				val++;
				mp2.erase(str2[i]);
				mp2.insert(make_pair(str2[i],val));
			}
		}
		if(mp1==mp2)
			cout<<"YES";
		else cout<<"NO";

		cout<<endl;
	}



return 0;}