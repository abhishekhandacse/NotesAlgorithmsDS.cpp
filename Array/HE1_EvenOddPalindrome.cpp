#include<bits/stdc++.h>

using namespace std;

void EvenOdd(string str){
	int len=str.length();
	int flag=0;
	for(int i=0;i<(len/2);i++){
		if(str[i]!=str[len-1-i])
			flag=1;
	}
	if(flag==1){
		cout<<"NO"<<endl;
	}else{
		if(len%2==0){
			cout<<"YES"<<" "<<"EVEN"<<endl;
		}else{
			cout<<"YES"<<" "<<"ODD"<<endl;
		}
	}
}

int main(){
	int tc;
	cin>>tc;
	while(tc--){
		string str;
		cin>>str;
		EvenOdd(str);
	}


return 0;}