#include<bits/stdc++.h>
using namespace std;

int main(){
	int tc;
	cin>>tc;

	while(tc--){
		string str;
		cin>>str;

		for(int i=0;i<str.length();i++){
			int ascii=(int)str[i];


			if(ascii>=65 && ascii <=90){
				cout<<" "<<(char)(str[i]+32);
			}else cout<<str[i];

		}
		cout<<endl;
	}



return 0;}