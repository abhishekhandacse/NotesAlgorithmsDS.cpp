#include <bits/stdc++.h>
using namespace std;

int main(){
	string num;
	getline(cin,num);
	int tc=stoi(num);

	
	while(tc--){
		unordered_map<char,int> mp;
		string str;
		getline(cin,str);
		string ans;
		for(int i=0;i<str.length();i++){
			
			int ascii=(int)str[i];
			auto it=mp.begin();
			if(ascii>=65 && ascii<=90)
				it=mp.find(str[i]+32);
			else it=mp.find(str[i]);
			if(it==mp.end()){
				ans+=str[i];
				
				if(ascii>=65 && ascii <=90)
					mp.insert(make_pair(str[i]+32,1));
				else if(ascii>=97 && ascii<=122)
					mp.insert(make_pair(str[i],1));
				else mp.insert(make_pair(str[i],1));
			}else{
				int val=(it->second);
				val=val+1;
				if( (val%2)==1)
					ans+=str[i];
				
				if(ascii>=65 && ascii <=90){
					mp.erase(str[i]+32);
					mp.insert(make_pair(str[i]+32,val));
				}
				else{
				    mp.erase(str[i]);
					mp.insert(make_pair(str[i],val));
				} 
			}
		}

		cout<<ans<<endl;




	}




return 0;}