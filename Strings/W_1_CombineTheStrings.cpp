#include<bits/stdc++.h>
using namespace std;

int main(){



int tc;
cin>>tc;
while(tc--){
	int bb=0,br=0,rb=0,rr=0;
	string str;
	int num;
	cin>>num;
	while(num--){
		cin>>str;
		int len=str.size();
		if( (str[0]=='B') && (str[len-1]=='B') ){
			bb+=len;
		}else if( (str[0]=='B') && (str[len-1]=='R')){
			br+=len;
		}else if( (str[0]=='R') && (str[len-1]=='B') ){
			rb+=len;
		}else if( (str[0]=='R') && (str[len-1]=='R') ){
			rr+=len;
		}  
	}

	if(br || rb){
		if(br)
	}else{
		cout<<max(bb,rr);
	}
	cout<<endl;	
}



return 0;}