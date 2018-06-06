// Add 2 binary numbers
// issue is with storing the result in string
#include <bits/stdc++.h>

using namespace std;

string AddBinary(string s1,string s2){
	int diff=s1.size()-s2.size();
	if(diff>0){
		for(int i=0;i<diff;i++)
			// s2.push_front('0');
			s2="0"+s2;
	}else{
		for(int i=0;i<abs(diff);i++){
			// s1.push_front('0');
			s1="0"+s1;
		}
	}
	// Now both the strings are of same size
	// string ans;
	int carry=0;
	string ans;
	for(int i=(s1.size()-1);i>=0;i--){
		int num=((s1.at(i)-'0') + (s2.at(i)-'0')+carry)%2;
		cout<<num;
		ans=(char)num  + ans;
		carry= (((s1.at(i)-'0') + (s2.at(i)-'0')+carry)/2);
	}
	return ans;
}

int main(){
	string s1="0101";
	string s2="10110";
	
	cout<<AddBinary(s1,s2)<<endl;
return 0;}