#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;
	cin>>tc;
	while(tc--){
		int flag=0,Problems=0,Participants=0;
		cin>>Problems;
		cin>>Participants;
		int arr[Problems];
		int CW=0,H=0;
		for(int i=0;i<Problems;i++){
			cin>>arr[i];
			if(arr[i]>=(Participants/2)) CW++;
			else if(arr[i]<=(Participants/10)) H++;
		}
		if( (CW>=1) && (H>=2) )
			flag=1;
		if(flag)
			cout<<"yes"<<endl;
		else
			cout<<"no"<<endl;
			
	}


	
return 0;}