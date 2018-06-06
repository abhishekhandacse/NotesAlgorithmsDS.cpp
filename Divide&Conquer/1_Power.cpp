#include <bits/stdc++.h>
#define wrap 100000007
typedef long long int lint;
using namespace std;

lint reverse(lint N){
    lint rev=0;
    while(N>0){
        rev= ((((rev*10)) + (N%10))) ;
        N/=10;
    }
    return rev;
}
lint power(lint N,lint X){
    if(X==1)
        return N;
    if( (X%2) == 0){//Even Power
       lint ans=( (power(N,(X/2))%wrap) ) ;
       return ((ans*ans)%wrap) ;
    }else{//Odd Power
        lint ans=( power(N,(X/2))%wrap) ;
        return  ( ( ( (ans*ans)%wrap)*N)%wrap) ;
    }
    
}
int main() {
	int tc;
	cin>>tc;
	while(tc--){
	    lint N;
	    cin>>N;
	    lint rev=reverse(N);
	   // lint ans=pow(N,rev);
	   lint ans=power(N,rev);
	   //You cant take modulo at each step if you use inbuilt power function
	    cout<< (ans%wrap) <<endl;
	}
	return 0;
}