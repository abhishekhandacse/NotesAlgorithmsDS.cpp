#include <bits/stdc++.h>

using namespace std;

int main(){
	int tc;
	cin>>tc;
	while(tc--){
		string str;
		cin>>str;
		int msf=0,meh=0,len=(str.length());
		for(int i=0;i<len;i++){
			if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'){
				meh++;
				if(msf<meh)
					msf=meh;
			}else{
				meh=0;
			}
		}
		cout<<msf<<endl;
	}
return 0;}