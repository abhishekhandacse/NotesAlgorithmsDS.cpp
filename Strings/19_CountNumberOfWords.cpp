#include <bits/stdc++.h>
using namespace std;

int main(){
	string num;
	getline(cin,num);
	int tc=stoi(num);
	while(tc--){
		string str;
		getline(cin,str);
		cout<<str<<endl;

		bool is_separator=1;
		int wc=0;
		for(int i=0;i<str.length();i++){
			if(str[i]==' ' || str[i]=='\t' || str[i]=='\n')
				is_separator=1;
			else{
				if(is_separator){
					wc++;
					is_separator=0;
				}
				
			}
		}
		cout<<wc<<endl;

	}




return 0;}