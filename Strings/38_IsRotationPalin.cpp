#include<bits/stdc++.h>

using namespace std;

int isPalin(string str){
	int i=0,j=str.length()-1;

	while(i<j){
		if(str[i++]!=str[j--])
			return 0;
	}
	return 1;
}

int isrotpalin(string str){
	string temp=str;
	temp+=str;

	string pass=str;
	for(int i=str.length();i<=temp.length();i++){
		if(isPalin(pass))
			return 1;
		if(i==temp.length())break;

		pass.erase(0,1);
		pass+=temp[i];
	}
	return 0;
}


int main(){
	int tc;
	cin>>tc;
	while(tc--){
		string str;
		cin>>str;
		cout<<isrotpalin(str)<<endl;
	}






return 0;}