#include <bits/stdc++.h>

using namespace std;

int main(){
	int tc;
	cin>>tc;
	while(tc--){
		int ip;
		cin>>ip;
		unordered_map<string,int> mp;
		string temp="";
		while(ip--){
			cin>>temp;
			if(temp==" "){
				ip++;
				continue;
			}
			if(mp.find(temp)==mp.end())
				mp.insert(make_pair(temp,1));
			else{
				int val=((mp.find(temp))->second);
				val++;
				mp.erase(temp);
				mp.insert(make_pair(temp,val));
			}
		}
		temp="";
		int highest=INT_MIN+1;int second=INT_MIN;
		string ans;
		for(auto it=mp.begin();it!=mp.end();it++){
			int val=it->second;
			if(val>highest){
				second=highest;
				ans=temp;
				highest=it->second;
				temp=it->first;
			}else if(val>second){
				second=it->second;
				ans=it->first;
			}
		}
		cout<<ans<<endl;


	}





return 0;}