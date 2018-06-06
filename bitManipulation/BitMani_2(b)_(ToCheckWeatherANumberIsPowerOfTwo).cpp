#include <iostream>
using namespace std;
bool isPowerOfTwo(int num){
	if(num==0) return false;
	if(num==1) return false;
	return ( ((num)&(num-1))==0);
}

int main(int argc, char const *argv[])
{
	int num=33;
	cout<<isPowerOfTwo(num);
	return 0;
}
// Time Complexity O(Log N)
// According to MASTER THEOREM