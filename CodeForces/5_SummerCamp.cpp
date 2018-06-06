#include <iostream>

using namespace std;

int main(){
	string str="0";
	int n;
	cin>>n;
	for(int i=1;i<=1000;i++)
		str=str+to_string(i);
	cout<<str[n];



return 0;}