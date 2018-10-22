#include<bits/stdc++.h>

using namespace std;

int main(){
	int tc;
	cin>>tc;
	while(tc--){
		string str;
		string pat;
		cin>>str>>pat;

		unordered_map<char,int> pat_mp;
		for(int i=0;i<pat.length();i++){
			if(pat_mp.find(pat[i])==pat_mp.end())
				pat_mp.insert(make_pair(pat[i],1));
			else{
				int val=((pat_mp.find(pat[i]))->second);
				val++;
				pat_mp.erase(pat[i]);

				pat_mp.insert(make_pair(pat[i],val));
			}
		}
		unordered_map<char,int> str_mp;

		for(int i=0;i<pat.length();i++){
			if(str_mp.find(str[i])==str_mp.end())
				str_mp.insert(make_pair(str[i],1));
			else{
				int val=((str_mp.find(str[i]))->second);
				val++;
				str_mp.erase(str[i]);

				str_mp.insert(make_pair(str[i],val));
			}	
		}

		int count=0;
		for(int i=pat.length();i<=str.length();i++){

			if(pat_mp==str_mp)
				count++;
				// cout<<i<<" ";

			if(i==str.length())
				break;

			auto it=str_mp.find(str[i-pat.length()] );
			if(it->second==1)
				str_mp.erase(str[i-pat.length()]);
			else{
				int val=it->second;
				val--;
				str_mp.erase(str[i-pat.length()]);
				str_mp.insert(make_pair(str[i-pat.length()],val));
			}

			if(str_mp.find(str[i])==str_mp.end())
				str_mp.insert(make_pair(str[i],1));
			else{
				int val=((str_mp.find(str[i]))->second);
				val++;
				str_mp.erase(str[i]);

				str_mp.insert(make_pair(str[i],val));
			}	
		}
		cout<<count<<endl;



	}






return 0;}