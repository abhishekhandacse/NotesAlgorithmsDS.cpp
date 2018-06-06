#include <bits/stdc++.h>

using namespace std;


void printbin(int n){
	if(n==0)
		return;

	printbin(n/2);
	cout<<(n%2);
}

int main(){

int tc;
cin>>tc;
while(tc--){
	int u;
	cin>>u;
	for(int i=1;i<=u;i++){
		printbin(i);
		cout<<" ";
	}
	cout<<endl;
}




return 0;}