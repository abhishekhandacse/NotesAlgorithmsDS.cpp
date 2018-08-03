#include<bits/stdc++.h>

using namespace std;

int hops(int num){
	int first=1,second=2,third=4;
	if(num==1)
		return 1;
	if(num==2)
		return 2;
	if(num==3)
		return 4;

	for(int i=0;i<(num-3);i++){
		int tf=first,ts=second,tt=third;
		third=tf+ts+tt;
		second=tt;
		first=ts;
	}
	return third;
}

int main(){

	int tc;
	cin>>tc;
	while(tc--){
		int num;
		cin>>num;

		cout<<hops(num)<<endl;
	}



return 0;}