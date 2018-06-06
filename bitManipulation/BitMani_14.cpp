#include <bits/stdc++.h>

using namespace std;

void PrintBinary(int N,int count){
	if(N==0){
		for(int i=count;i<14;i++){
			cout<<0;
		}
	return;
	}
	PrintBinary(N/2,count+1);
	cout<<N%2;
}

int main(){
	int N;
	cin>>N;
	PrintBinary(N,0);
return 0;}