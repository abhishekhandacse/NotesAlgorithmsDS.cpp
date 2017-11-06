#include <iostream>
#include <cmath>
#define size 10000000
typedef unsigned long long int lint;
using namespace std;

lint isPrime(lint n){
	for(int i=2;i<=sqrt(n);i++){
		if( (n%i)==0 ){
			return 0;
		}
	}
	return 1;
}

int main(){
	lint *arr=new lint[size];
	lint counter=0,i=1;
	while(counter!=size){
		if(isPrime(i)){
			arr[counter]=i;
			counter++;
		}
		i++;
	}
	//// --To Check weather all prime numbers captured correctly,please uncomment this loop
	for(lint i=0;i<size;i++)
		cout<<arr[i]<<" ";

	lint number=6000851475143;
	lint start=number/2;
	if(arr[size-1]>start){
		cout<<"CORRECT START"<<endl;
	}else{
		cout<<"INCREASE THE SIZE VARIABLE"<<endl;
		return 0;//Terminate
	}
	for(lint i=size-1;i>=0;i--){
		if( ( number % arr[i] ) ==0 ){
			cout<<endl;
			cout<<arr[i];
		}
	}

return 0;}