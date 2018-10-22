#include<bits/stdc++.h>
using namespace std;
int main(){

	// Generate random sized array with random elements

	int num=100,n,k;

	ofstream myfile;

	myfile.open("input.txt");

	// Printing num of arrays
	myfile<<num<<" ";
	while(num--){
		

		n=(rand()%100) + 1;// [1,100]
		k=(rand()%10000) + 1;
		// print random elements size num of times
		myfile <<n<<" "<<k<<"\n";

		for(int i=0;i<n;i++){
			// cout<<((rand()%10) +1)<<" ";
			myfile<<((rand()%100) +1)<<" ";  // [1,100]
		}
		// myfile<<"\n";
	}

	myfile.close();

	//  Main Rotation Program Logic starts





return 0;}