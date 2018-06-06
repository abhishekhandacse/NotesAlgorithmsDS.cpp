#include <bits/stdc++.h>
using namespace std;
typedef long long int lint;
int main(){
	int tc;
	cin>>tc;
	while(tc--){
		string str;
		lint N;
		cin>>str;
		cin>>N;
		lint orga=0,orgb=0;
		lint count=0;
		for(lint i=0;i<str.length();i++){
			if(str[i]=='a')
				orga++;
			else
				orgb++;
			if(orga>orgb)
				count++;
		}
		lint lenstr=str.length();
		lint len=(lenstr*N);
		
		lint counter=0;
		lint a=0,b=0;
		for(lint i=0;i<len;i++){
			if(str[i%lenstr]=='a')
				a++;
			else b++;

			if(orgb>orga){
				if((b-a)>=orga){
					// cout<<endl<<"breaked"<<endl;
					break;
				}
			}else if(orga>orgb){
				if((a-b)>orgb){
					counter+=(len-i);
					// cout<<endl<<"breaked"<<endl;
					break;
				}
			}else{
				counter=((count)*(N));
				break;
			}

			if(a>b)
				counter++;
		}
		cout<<counter<<endl;

	}



return 0;}