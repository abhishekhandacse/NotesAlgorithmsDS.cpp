#include<bits/stdc++.h>

using namespace std;

 int main(){
 	int tc;
 	cin>>tc;
 	while(tc--){
 		string str1,str2;
 		cin>>str1>>str2;

 		unordered_set<char> st(str2.begin(),str2.end());

 		string uncommon;
 		string common;
 		for(int i=0;i<str1.length();i++){
 			if(st.find(str1[i])==st.end())
 				uncommon+=str1[i];
 		}
	 	unordered_set<char> st1(str1.begin(),str1.end()); 		
 		
 		for(int i=0;i<str2.length();i++){
 			if(st1.find(str2[i])==st1.end())
 				common+=str2[i];
 		}
 		uncommon+=common;
 		if(uncommon.length()==0)
 			cout<<-1;
 		else cout<<uncommon;

 		cout<<endl;

 	}




 return 0;}