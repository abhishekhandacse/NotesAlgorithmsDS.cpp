#include<bits/stdc++.h>
using namespace std;
#define RANGE 1000000
int main(){

	// Generate random sized array with random elements

	int num=8,n,k;

	ofstream myfile;

	myfile.open("z4_Input.txt");

	// Printing num of arrays
	// myfile<<num<<"\n";
	// auto start = high_resolution_clock::now();


	while(num--){
		

		n=(rand()%RANGE) + 1;// [1,100]
		k=(rand()%RANGE) ;
		// print random elements size num of times
		myfile <<k<<"\n";

		for(int i=0;i<n;i++){
			// cout<<((rand()%10) +1)<<" ";
			myfile<<((rand()%RANGE) +1)<<" ";  // [1,100]
		}
		myfile<<"\n";
	}
	
	// auto stop = high_resolution_clock()::now; 
	myfile.close();

	// Total time duration taken

	// auto duration = duration_cast<microseconds>(stop - start); 
  
 
	// cout << duration.count() << endl; 





return 0;}