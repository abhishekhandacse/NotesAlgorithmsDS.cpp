#include <iostream>
using namespace std;


int isPalindrome(char *str,int len);
void printPalindromeAux(char *str,int len,int i,int left,int right,int &count){
	if(count==1)
		return;
	if(i==len){
		if(!(left && right) )
			return;
		if(isPalindrome(str,i)){
			// Print only one palindromic strings
			count=1;
			for(int i=0;i<len;i++)
				cout<<str[i];
			cout<<endl;
		}
	return;
	}
	str[i]='a';
	printPalindromeAux(str,len,i+1,left+1,right,count);
	str[i]='b';
	printPalindromeAux(str,len,i+1,left,right+1,count);
}
int printPalindrome(char *str,int len){
	// char *str=new char[len];
	int count=0;
	printPalindromeAux(str,len,0,0,0,count);
	return count;
}

int isPalindrome(char *str,int len){
	for(int i=0;i<(len/2);i++){
		if((str[i]!=str[len-1-i])){
			return 0;
		}
	}
	return 1;
}
int main(){
	int tc;
	cin>>tc;
	while(tc--){
		int N,P;
		cin>>N>>P;
		char str[N];
		if(!printPalindrome(str,N)){
			cout<<"impossible"<<endl;
		}
	}
	// int len=5;
	// printPalindrome(len);
return 0;}