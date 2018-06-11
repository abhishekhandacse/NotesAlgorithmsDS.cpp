#include <bits/stdc++.h>

using namespace std;


// For positive subsequences only

int KadanesAlgo(int *arr,int size){
	int msf=0,meh=0;

	for(int i=0;i<size;i++){
		meh+=arr[i];
		if(msf<meh)
			msf=meh;

		if(meh<0)
			meh=0;
	}
	return msf;
}

//For -ve subsequences

int KadanesAlgoNeg(int *arr,int size){
	int msf=arr[0],meh=arr[0];

	for(int i=1;i<size;i++){
		meh=max(arr[i],msf+arr[i]);
		msf=max(msf,meh);
	}

	return msf;

}

int main(){
	int tc;
	cin>>tc;


	while(tc--){
		int size;
		cin>>size;
		int *arr=new int[size];
		for(int i=0;i<size;i++)
			cin>>arr[i];
		cout<<KadanesAlgoNeg(arr,size)<<endl;
		// cout<<KadanesAlgo(arr,size)<<endl;
	}
return 0;}