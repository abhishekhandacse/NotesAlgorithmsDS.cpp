#include <bits/stdc++.h>

using namespace std;

int main(){
	string str="vishu";
	sort(str.begin(),str.end());
	// cout<<str<<endl;
	vector<string> str1{"handa","kabaddi","aaaabhishek"};
	for(int i=0;i<str1.size();i++){
		// cout<<str1[i]<<endl;
		sort(str1[i].begin(),str1[i].end());
		// cout<<str1[i]<<endl;
	}
	for(int i=0;i<str1.size();i++)
		cout<<str1[i]<<endl;
	sort(str1.begin(),str1.end());
	for(int i=0;i<str1.size();i++)
		cout<<str1[i]<<endl;

return 0;}