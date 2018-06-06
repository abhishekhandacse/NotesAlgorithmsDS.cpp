#include <bits/stdc++.h>

using namespace std;

string reverse(string str){
	char temp;
	int len=str.length();
	for(int i=0;i<=(len/2);i++){
		temp=str[i];
		str[i]=str[len-1-i];
		str[len-i-1]=temp;
	}
	return str;
}

int main(){
	int tc;
	cin>>tc;
	while(tc--){
		string str;
		cin>>str;
		cout<<reverse(str)<<endl;
	}


return 0;}