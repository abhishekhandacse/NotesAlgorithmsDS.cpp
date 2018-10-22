#include<bits/stdc++.h>
#define SIZE 255
using namespace std;


int count(string str1,string str2){

	int arr1[SIZE]={0};
	int arr2[SIZE]={0};

	for(int i=0;i<str1.length();i++){
		int ascii=(int)str1[i];
		arr1[ascii]+=1;
	}

	for(int i=0;i<str2.length();i++){
		int ascii=(int)str2[i];
		arr2[ascii]+=1;
	}

	//Converting arr1 to arr2

	int ans=0;

	for(int i=0;i<SIZE;i++){
		if((arr1[i]-arr2[i])>0)
			ans+=(arr1[i]-arr2[i]);
	}
	return ans;




}

int main(){
	int tc;
	cin>>tc;
	while(tc--){
		
		string str1,str2;
		int len;
		cin>>len;
		cin>>str1>>str2;

		cout<<count(str1,str2)<<endl;
	}
return 0;}