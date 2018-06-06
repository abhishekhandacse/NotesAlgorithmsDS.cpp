#include <bits/stdc++.h>

using namespace std;


int XOR(int X,int Y){
	int size=sizeof(X);
	size=size*8;
	int result=0;
	int flag=1;
	for(int i=size-1;i>=0;i--){
		flag=flag<<1;
		if( (X&flag) &&  (Y&flag)  ){//If both the bits are set
			continue;
		}else{
			int check=(X&flag) || (Y&flag);//If any one of the bits is set
			if(check){
				// Make result bit higher
				result=result|flag;
			}
		}
	}
	return result;
}
int main(){
	int num1=10;
	int num2=20;
	cout<<XOR(10,20);
	// Time Complexity=O(N)
	// Space 		   O(1);


return 0;}