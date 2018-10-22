#include<bits/stdc++.h>

using namespace std;

bool isdigit(char t){
	int ascii=(int)t;
	if(ascii>=48 && ascii<=57)
		return true;
	return false;
}
int main(){
	int tc;
	cin>>tc;
	while(tc--){
		string str;
		cin>>str;
		vector<char> vect;
		int sum=0;
		for(int i=0;i<str.length();i++){
			if(isdigit(str[i]))
				sum+=str[i]-'0';
			else vect.push_back(str[i]);
		}

		sort(vect.begin(),vect.end());

		for(auto i=vect.begin();i!=vect.end();i++)
			cout<<(*i);

		cout<<sum<<endl;


	}




return 0;}