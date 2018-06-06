// Incrementing w/o using addn
#include <bits/stdc++.h>
using namespace std;

// Method 1 using 2s complement form
int AddOne1(int X){
	return (-(~X));
}

//Method 2 
int AddOne2(int X){
	int temp=1;
	// Unset All set Bits till first 0 detected in X
	while(X&temp){
		X=X^temp;
		temp=temp<<1;
	}
	// Finally flip 0
	X=X^temp;
return X;
}

int main(){
	int num=10;
	// 10+1=11
	cout<<AddOne1(num)<<endl;
	cout<<AddOne2(num)<<endl;
return 0;}