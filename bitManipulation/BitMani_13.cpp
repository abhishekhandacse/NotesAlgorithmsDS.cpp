#include<bits/stdc++.h>

using namespace std;
int isPowerOfFour(unsigned int X)
{   while(X!=1){
        if( (X&1==0)  &&  (X&2==0) ){
            X=X>>2;
        }else{
            return 0;
        }
    }
    return 1;
}

int main(){
	int N=17;
	cout<<isPowerOfFour(4)<<endl;
return 0;}