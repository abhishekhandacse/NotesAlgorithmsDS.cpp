#include<bits/stdc++.h>
using namespace std;

string longestLCS(string str1,string str2){
	int *hm1=(int*)calloc(256,sizeof(int));
	int *hm2=(int*)calloc(256,sizeof(int));

	for(int i=0;i<str1.size();i++){
		int ascii=(int)str1[i];
		hm1[ascii]+=1;
	}
	for(int i=0;i<str2.size();i++){
		int ascii=(int)str2[i];
		hm2[ascii]+=1;
	}
	string str="";
	for(int i=0;i<256;i++){
		int mini=min(hm1[i],hm2[i]);
		for(int j=0;j<mini;j++)
			str+=(char)i;
	}

	return str;

}

int main(){
	int tc;
	cin>>tc;
	while(tc--){
		string str1,str2;
		cin>>str1>>str2;

		cout<<longestLCS(str1,str2)<<endl;
	}





return 0;}