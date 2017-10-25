#include <iostream>
using namespace std;

void printParenthesesAux(char *str,int pos,int N,int open,int close){
	if(close==N){
		cout<<str<<endl;
		return;
	}
	if(open<N){
		str[pos]='{';
		printParenthesesAux(str,pos+1,N,open+1,close);
	}
	if(open>close){
		str[pos]='}';
		printParenthesesAux(str,pos+1,N,open,close+1);
	}
}
void printParentheses(int N){
	char str[2*N];
	if(N>0)
		printParenthesesAux(str,0,N,0,0);
}
int main(){
printParentheses(6);
return 0;}