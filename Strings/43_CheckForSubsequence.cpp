#include<bits/stdc++.h>

using namespace std;


int checkss(string str1,string str2){
	if(str1.length()>str2.length())
		return 0;

	int i1=0,i2=0;

	while( i1!=str1.length() && i2!=str2.length() ){
		if(str1[i1]==str2[i2]){
			i1++;i2++;
		}else i2++;
	}

	if(i1==str1.length())return 1;
	return 0;
}


int main(){

	int tc;
	cin>>tc;
	while(tc--){
		string str1,str2;
		cin>>str1>>str2;
		cout<<checkss(str1,str2)<<endl;
	}





return 0;}