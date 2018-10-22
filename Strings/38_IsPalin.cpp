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

int main(){
	int tc;
	cin>>tc;


	while(tc--){
		int size;
		cin>>size;
		string str;
		cin>>str;

		if(isPalin(str))
			cout<<"Yes";
		else cout<<"No";

		cout<<endl;
	}







return 0;}