#include<bits/stdc++.h>

using namespace std;


string ToggleCase(string str){
	int size=str.length();
	string ans;
	for(int i=size-1;i>=0;i--){
		int ascii=(int)str[i];
		if(ascii>=97){
			int NewAscii=(ascii&95);
			ans=(char)NewAscii+ans;
		}else{
			int NewAscii=(ascii|32);
			ans=(char)NewAscii+ans;
		}
	}
	return ans;
}
int main(){
	string str="Abhishek Handa";
	cout<<ToggleCase(str)<<endl;

return 0;}