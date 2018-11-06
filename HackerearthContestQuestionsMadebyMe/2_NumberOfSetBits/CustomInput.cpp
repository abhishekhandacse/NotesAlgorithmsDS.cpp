#include<bits/stdc++.h>
typedef unsigned long long int lint;
using namespace std;

int main(){

	lint tc,N,counter;
	cin>>tc;

	while(tc--){
		
		cin>>N;
		counter=0;

		for(int i=0;i<64;i++)
			if( N & (1<<i) )
				counter++;
		

		cout<<counter<<endl;

	}





return 0;}