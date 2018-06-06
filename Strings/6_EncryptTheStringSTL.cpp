#include <bits/stdc++.h>

using namespace std;


string encrypt(string str){
	if(str.length()==0)
		return NULL;

	string temp;
	int counter=1;
	char prev='\0';
	for(int i=0;i<str.length();i++){
		if(prev==str[i])
			counter++;
		else if(prev!='\0'){
			temp+=prev+to_string(counter);
			counter=1;
		}
		prev=str[i];
	}
	temp+=prev+to_string(counter);
	reverse(temp.begin(),temp.end());
	return temp;
}

int main(){
	int tc;
	cin>>tc;
	while(tc--){
		string str;
		cin>>str;
		cout<<encrypt(str)<<endl;
	}



return 0;}