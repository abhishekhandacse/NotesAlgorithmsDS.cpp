// This is the most impower question
// Please refer code MONK for revision


#include <iostream>
using namespace std;

unsigned int largestPower(unsigned int N){
	N= N | (N>>1);
	N= N | (N>>2);
	N= N | (N>>4);
	N= N | (N>>8);
	N= N | (N>>16);
	return ((N+1)>>1);
}

int main(){
	// cout<<sizeof(unsigned int);
	cout<<largestPower(35);
return 0;}

