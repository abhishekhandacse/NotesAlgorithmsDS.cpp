#include <bits/stdc++.h>
using namespace std;


void permute(string str,string temp="",int i=0,char t='a'){
	if( temp.length()==str.length()){
		cout<<temp<<endl;
		return;
	}

	if(i)
		temp+=t;

	int ascii=(int)str[i];
	if(ascii>=65 && ascii<=90)
		permute(str,temp,i+1,str[i]+'a'-'A');
	else permute(str,temp,i+1,str[i]+'A'-'a');

	permute(str,temp,i+1,str[i]);
}


int main(){

	string str="ab";
	permute("ab");



return 0;}