#include<bits/stdc++.h>

using namespace std;

#define SIZE 256
int count(string str,string pat){
	int str_ht[SIZE]={0};
	int pat_ht[SIZE]={0};

	for(int i=0;i<str.length();i++){
		int ascii=(int)str[i];
		str_ht[ascii]+=1;
	}
	for(int i=0;i<pat.length();i++){
		int ascii=(int)pat[i];
		pat_ht[ascii]+=1;
	}
	//Comparison

	int ans=0;
	for(int i=0;i<SIZE;i++){
		ans+=abs(str_ht[i]-pat_ht[i]);
	}
	return ans;
}

int main(){
	int tc;
	cin>>tc;
	while(tc--){
		string str,pat;
		cin>>str>>pat;

		cout<<count(str,pat)<<endl;

	}





return 0;}