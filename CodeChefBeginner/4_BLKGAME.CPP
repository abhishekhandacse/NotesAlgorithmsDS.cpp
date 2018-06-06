#include <bits/stdc++.h>
 
using namespace std;
 
 
int isPalindrome(int N){
	if(N<9)
		return 1;
	int reverse=0,temp=N;
	while(temp!=0){
		reverse=reverse*10+(temp%10);
		temp/=10;
	}
	if(reverse==N){
		return 1;
	}else{
		return 0;
	}
 
}
int main(){
int tc;
cin>>tc;
while(tc--){
	int N;
	cin>>N;
	// cout<<isPalindrome(N)<<endl;	
 	if(isPalindrome(N)){
 		cout<<"wins"<<endl;
 	}else{
 		cout<<"losses"<<endl;
 	}
}
 
 
return 0;} 