/*
	Pseduo code is self explanatory-:
_________________________________________

	for i=0 -->  2^N
		for j=0 --> N
			if j th bit set in i
				print A[j]


*/
#include <iostream>
#include <cmath>
using namespace std;
void printPowerSet(char arr[],int len){
	// int total=pow(2,len);
	// for(int i=0;i<total;i++){
	// Even further optimised because bitwise operators are far far faster than 
	// Normal function calls
	for(int i=0;i<(1<<len);i++){
		for(int j=0;j<len;j++){
			if( ( (i)  &  (1<<j) ) )
				cout<<arr[j];
		}
		cout<<endl;
	}
}
int main(){
	char arr[]={'a','b','c','d'};
	printPowerSet(arr , sizeof(arr)/sizeof(char) );
return 0;}