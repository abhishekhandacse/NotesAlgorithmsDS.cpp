#include <bits/stdc++.h>

using namespace std;

int Ones(int num){
	int shifter=1,counter=0,temp;
			for(int i=0;i<32;i++){
				if(num&(shifter<<i) ) {
					counter++;
				}
				
			}
	return counter;
}
int main(){
	int tc;
	cin>>tc;
	while(tc--){
		int num;
		cin>>num;
		if(num<=2048){
			cout<<Ones(num)<<endl;
		}else{
			int temp=(num/2048);
			int ones=Ones(num%2048);
			cout<<temp+ones<<endl;
		}
	}
return 0;}