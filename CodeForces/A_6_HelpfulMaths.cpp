#include<bits/stdc++.h>

using namespace std;


int main(){

	string str;
	cin>>str;

	int ones=0,twos=0,threes=0;

	for(int i=0;i<str.length();i++){

		if(str[i]=='1'){
			ones++;
		}else if(str[i]=='2'){
			twos++;
		}else if(str[i]=='3'){
			threes++;
		}

	}
	int plus=ones+twos+threes-1;

	for(int i=0;i<str.length();i++){
		if(ones){
			cout<<1;
			ones--;
		}else if(twos){
			cout<<2;
			twos--;
		}else if (threes){
			cout<<3;
			threes--;
		}
		if(plus){
			cout<<'+';
			plus--;
		}
	}
	cout<<endl;








return 0;}