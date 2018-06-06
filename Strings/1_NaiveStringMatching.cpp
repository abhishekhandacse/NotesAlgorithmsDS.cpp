#include <bits/stdc++.h>
using namespace std;

int matchPattern(string str1,string str2){
	int M=str1.length();
	int N=str2.length();
	int flag=0;
	for(int shifts=0;shifts<=(M-N);shifts++){
		flag=0;
		for(int i=shifts;i<N;i++){
			if(str1[i]!=str2[i]){
				flag=1;
				break;
			}
		}
		if(flag==0){
			return 1;
		}
	}
	return 0;
}

int main(){
string str1="AB";
string str2="AA";
cout<<matchPattern(str1,str2);
return 0;}