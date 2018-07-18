#include<bits/stdc++.h>

using namespace std;


void permute(string str,string temp="",int i=0){
	temp+=str[i];
	if( (i+1)==str.length()){
		cout<<"("<<temp<<")";
		return;
	}
	permute(str,temp+' ',i+1);
	permute(str,temp,i+1);
}

int main(){
	int tc;
	cin>>tc;
	while(tc--){
		string str;
		cin>>str;
		permute(str);
		cout<<endl;

	}


return 0;}