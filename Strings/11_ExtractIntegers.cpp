#include<bits/stdc++.h>
using  namespace std;


int main(){
	string tc;
	getline(cin,tc);
	int num=stoi(tc);
	while(num--){
		string str;
		getline(cin,str);
		int flag=0;
		for(int i=0;i<str.length();i++){
			if( ((int)str[i]>=48) && ((int)str[i]<=57)){
				cout<<str[i];
				flag=1;
			}
			else if(flag && str[i]==' ' && str[i-1]!=' ')
					cout<<' ';

		}
		if(!flag)
			cout<<"No Integers";

		cout<<endl;


	}




return 0;}