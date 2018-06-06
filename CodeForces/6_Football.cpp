#include <bits/stdc++.h>

using namespace std;

int main(){

	int tc;
	cin>>tc;
	map<string,int> mp;
	for(int i=0;i<tc;i++){
		string str;
		cin>>str;
		if(mp.find(str)==mp.end()){
			mp.insert(make_pair(str,1));
		}else{
			int val=mp[str];
			val++;
			mp.erase(str);
			mp.insert(make_pair(str,val) );
		}
	}

	map<string,int> ::iterator it;
	string max;
	int val=INT_MIN;
	for(it=mp.begin();it!=mp.end();it++){
		// cout<<(it->first)<<" "<<(it->second)<<endl;
		
		if((it->second) >val){
			max=it->first;
			val=it->second;
		}
	}
	cout<<max;


return 0;}