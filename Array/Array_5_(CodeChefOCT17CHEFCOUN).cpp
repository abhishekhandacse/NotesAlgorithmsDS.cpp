#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
	int tc=10;
	long long int MAX=2000000000;
	for(int i=0;i<tc;i++){
		long long int size= rand()%(MAX)+1000000000;
		cout<<size<<endl;
	}
return 0;}