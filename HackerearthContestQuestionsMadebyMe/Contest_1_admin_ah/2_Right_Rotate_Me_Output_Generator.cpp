#include<bits/stdc++.h>

using namespace std;

int main(){
	ofstream myfile;
	ofstream myoutput;
	myfile.open("input.txt");
	myoutput.open("output.txt");
	int num,n,k;
	// myfile >> num;

	// while(num--){
	// 	myfile >> n >> k;
	// 	int *arr=new int[ (2*n) ];
	// 	// Copying content 2 make access fast
	// 	for(int j=0;j<n;j++){
	// 		int temp;
	// 		myfile >> temp;
	// 		cout<<temp;
	// 		// arr[j+n]=arr[j];
	// 	}
	// 	// Now the main logic starts
	// 	k=k%n;
	// 	for(int i=k;i<=k+n;i++){

	// 		myoutput << arr[i]<<" ";
	// 	}
	// delete [] arr;
	// }
	myfile.close();
	myoutput.close();		
return 0;}