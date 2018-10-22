#include<bits/stdc++.h>
using namespace std;

int main(){

	string str;
	cin>>str;
	int count0 =0,count1=0;
	int danger=0;
	
	for(auto i:str){

		if(i=='0'){
			count1=0;
			count0++;
			if(count0==7){
				danger=1;
				break;
			}


		}else if(i=='1'){

			count0=0;
			count1++;
			if(count1==7){
				danger=1;
				break;
			}

		}

	}

	if(danger)
		printf("YES\n");
	else printf("NO\n");




return 0;}