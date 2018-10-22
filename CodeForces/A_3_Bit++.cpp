#include<iostream>
using namespace std;

int main(){

	int n;
	cin>>n;

	string str;

	int x=0;

	while(n--){
		cin>>str;

		if(str.compare("++X")==0 || str.compare("X++")==0 )
			x++;
		else x--;	

	}

	cout<<x<<endl;






return 0;}