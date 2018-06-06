#include <bits/stdc++.h>

using namespace std;

string twoscomplement(string str){
	int len=str.length();
	cout<<len<<endl;
	string ans;
	int flag=0;
	for(int i=len-1;i>=0;i--){
		if(flag){
			if(str[i]=='1'){
				ans='0'+ans;
				continue;
			}else{
				ans='1'+ans;
				continue;
			}
		}
		if(str[i]=='1'){
			flag=1;
			ans=str[i]+ans;
		}else{
			ans=str[i]+ans;
		}
	}
	return ans;
}
int main(){
	string str="1101";
	cout<<twoscomplement(str)<<endl;

return 0;}