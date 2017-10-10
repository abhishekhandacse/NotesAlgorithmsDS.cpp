#include <iostream>
using namespace std;
bool isPowerOfTwo(int num){
	if(num==0) return false;//0 is not power of two
	else{
		while(num%2==0) num>>=1;
		// if(num==1) return true;
		// else return false;
		return (num==1);
	}
}

int main(int argc, char const *argv[])
{
	int num=33;
	cout<<isPowerOfTwo(num);
	return 0;
}
// Time Complexity O(Log N)
// According to MASTER THEOREM