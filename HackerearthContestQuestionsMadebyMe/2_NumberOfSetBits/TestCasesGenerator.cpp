#include<bits/stdc++.h>

using namespace std;

#define INT_MOD  1000000000
#define LINT_MOD 10000000000000000
typedef unsigned long long int lint;

lint setbits(lint num){
	lint counter=0;
	while(num){
		num=((num) & (num-1));
		counter++;
	}
	return counter;
}

int main(){

	ofstream input,output;
	// Input File connection
	input.open("IpFile4.txt");
	// Output File connection
	output.open("OpFile4.txt");

	lint tc=64,num,shift=0,one=1;

	input<<tc<<endl;
	while(tc--){
		num=  (one<<shift );
		// cout<<num<<endl;
		input<<num<<endl;
		output<<setbits(num)<<endl;
		shift++;

	}
	

return 0;}