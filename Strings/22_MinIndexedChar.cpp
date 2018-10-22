#include<bits/stdc++.h>
using namespace std;

int main(){
	int tc;
	cin>>tc;
	while(tc--){
		string str,pat;
		cin>>str>>pat;

		unordered_map<char,int> mp;
		for(int i=0;i<str.length();i++){
			if(mp.find(str[i])==mp.end()){
				mp.insert(make_pair(str[i],i));
			}
		}

		int mini=INT_MAX;
		char ans;
		for(int i=0;i<pat.length();i++){
			if(mp.find(pat[i])!=mp.end()){
				if(mini>mp[pat[i]]){
						mini=mp[pat[i]];
						ans=pat[i];

					}
				}
		}
		if(mini==INT_MAX)
			cout<<"No character present";
		else cout<<ans;

		cout<<endl;
	}



return 0;}