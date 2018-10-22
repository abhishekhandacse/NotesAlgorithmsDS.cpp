#include<bits/stdc++.h>
using namespace std;

void combinations(string str,int a=0,int b=0,int c=0,string temp="",int i=0){
	if(i==str.length()){
		if(a && b && c)
			cout<<temp<<endl;
	return;}
	
	if(str[i]=='a'){
		combinations(str,a+1,b,c,temp+str[i],i+1);
		combinations(str,a,b,c,temp,i);
	}else if(str[i]=='b'){
		combinations(str,a,b+1,c,temp+str[i],i+1);
		combinations(str,a,b,c,temp,i);
	}else if(str[i]=='c'){
		combinations(str,a,b,c+1,temp+str[i],i+1);
		combinations(str,a,b,c,temp,i);
	}
}

int main(){
	int tc;
	cin>>tc;
	while(tc--){
		string str;
		cin>>str;
		combinations(str);
	}




return 0;}