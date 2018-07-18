#include<bits/stdc++.h>

using namespace std;

int ap(string str){
	int hm[256]={0};

	for(int i=0;i<str.length();i++){
		int ascii=(int)str[i];

		hm[ascii]+=1;
	}
	int odd=0;
	for(int i=0;i<256;i++){
		if( ((hm[i]%2)!=0) )
			odd++;
	}
	if(odd>1)
		return 0;
	else return 1;
}

int main(){

	int tc;
	cin>>tc;
	while(tc--){
		string str;
		cin>>str;

		if(ap(str))
			cout<<"Yes";
		else cout<<"No";

		cout<<endl;

	}




return 0;}