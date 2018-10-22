#include<bits/stdc++.h>

using namespace std;




int main(){
	int tc;
	cin>>tc;
	while(tc--){
		string str;
		cin>>str;
		int sum=0;
		int num=0;
		for(int i=0;i<str.length();i++){
			int ascii=(int)str[i];

			if(ascii>=48 && ascii <=57){
				num=(num*10)+(int)(str[i]-'0');
			}else{
				if(sum<num)
					sum=num;
				num=0;
			}
		}
		if(sum<num)
			sum=num;

		cout<<sum<<endl;
	}





return 0;}