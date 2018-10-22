#include<iostream>

using namespace std;


string lower(string str){
	string ans="";
	int ascii,temp;
	for(int i=0;i<str.length();i++){
		ascii=(int)str[i];

		if(ascii>=97){
			ans+=str[i];
		}else{
			temp=ascii+32;
			ans+=(char)temp;
		}
	}
	return ans;
}

int main(){

	string str1,str2;
	cin>>str1>>str2;
	//Convert both string to lower case
	str1=lower(str1);
	str2=lower(str2);

	// cout<<str1<<" "<<str2<<endl;
	int needle=0;

	for(int i=0;i<str1.length();i++){
		if((int)str1[i]  <  (int)str2[i]){
			needle=-1;break;
		}else if((int)str1[i]  >  (int)str2[i]){
			needle=1;break;
		}
	}


	cout<<needle<<endl;


return 0;}