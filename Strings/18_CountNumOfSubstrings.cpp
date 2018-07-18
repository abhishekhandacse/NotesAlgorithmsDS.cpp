#include<bits/stdc++.h>
using namespace std;
int main(){
	int tc;
	cin>>tc;
	while(tc--){
		string str;
		cin>>str;
		int k;
		cin>>k;

		int ans=0;
		for(int i=0;i<str.length();i++){
			unordered_set<char> st;
			for(int j=i;j<str.length();j++){
				st.insert(str[j]);
				if(st.size()==k)
					ans++;
				if(st.size()>k)
					break;

			}
		}

		cout<<ans<<endl;
	}




return 0;}