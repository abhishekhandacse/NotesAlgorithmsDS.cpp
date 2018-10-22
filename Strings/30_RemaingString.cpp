#include<bits/stdc++.h>

using namespace std;


int main(){
	int tc;
	cin>>tc;
	while(tc--){
		string str;
		cin>>str;
		unordered_map<char,int> mp;
		
		char t;
		cin>>t;
		int count;
		cin>>count;
		int len=str.length();
		int index=-1;

		for(int i=0;i<str.length();i++){
			if(mp.find(str[i])==mp.end())
				mp.insert(make_pair(str[i],1));
			else {
				int val=((mp.find(str[i]))->second);
				val++;
				mp.erase(str[i]);
				mp.insert(make_pair(str[i],val));
			}

			if(mp[t]==count){
				index=i;
				break;
			}

		}
		if(t==0)
			cout<<str;
		else if(index==-1 || index==len-1)
			cout<<"Empty string";
		else{
			for(int j=index+1;j<len;j++)
				cout<<str[j];
		}

		cout<<endl;

	}



}