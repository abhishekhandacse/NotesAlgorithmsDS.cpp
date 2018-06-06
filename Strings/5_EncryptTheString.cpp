#include <bits/stdc++.h>

using namespace std;

int main(){
	int tc;
	cin>>tc;
	while(tc--){
		string str;
		cin>>str;
		map<char,int> mp;
		map<char,int>::iterator it;
		for(int i=0;i<(str.length());i++){
			char c=str[i];
			it=mp.find(c);
			if(it==mp.end()){
				mp.insert(make_pair(c,1));
			}else{
				int num=(it->second);
				mp.erase(c);
				num++;
				mp.insert(make_pair(c,num));
			}
		}
		string temp;
		for(it=mp.begin();it!=mp.end();it++){
			temp+=(it->first);
			int num=(it->second);
			temp+=to_string(num);
		}
		reverse(temp.begin(),temp.end());
		cout<<temp<<endl;

	}



return 0;}