#include <bits/stdc++.h>
using namespace std;

int main(){
	
	string tc;
	getline(cin,tc);
	int num=stoi(tc);
	while(num--){
		string str;
		getline(cin,str);
		string pattern;
		string replacement;
		getline(cin,pattern);
		getline(cin,replacement);
		
		size_t index = 0;
	while (true) {
     /* Locate the substring to replace. */
     index = str.find(pattern, index);
     if (index == std::string::npos) break;

     /* Make the replacement. */
     str.replace(index, replacement.length(), replacement);

     /* Advance index forward so the next iteration doesn't pick it up as well. */
     index += 3;
	}
		
		cout<<str<<endl;
		
	}


return 0;}