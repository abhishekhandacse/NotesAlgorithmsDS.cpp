#include <bits/stdc++.h>

using namespace std;

int strlen_(const char *str){
	int counter=0;
	while( (*str)!='\0'){
		counter++;
		str=str+1;
	}
	return counter;
}
int strcmp_modified(const char *str1,const char *str2){
	int l1=0,l2=0;
	l1=strlen_(str1);
	l2=strlen_(str2);
	if(l1<l2){
		return -1;
	}else if( l1>l2){
		return 1;
	}else{
		// Now match both the characters till the point of first
		// Mismatch
		for(int i=0;i<l1;i++){
			if(str1[i]==str2[i]){
				continue;
			}else{
				return ((int)str1[i])-((int)str2[i]);
			}
			// If complete string matches 
		}
		return 0;
	}
}
int main(){
// Good TC's
	// TC-1
// const char* str1="Geeks";
// const char* str2="geeks";
// It should return -32
	// TC-2
// const char *str1="Geeks";
// const char *str2="Geeks";
// It should return 0
	// TC-3
//char *str1="Gee";
//char *str2="Geeks";
// It should return -1
const char *str1="Geeks";
const char *str2="Gee";
// It should return +1
cout<<strcmp_modified(str1,str2)<<endl;
return 0;}