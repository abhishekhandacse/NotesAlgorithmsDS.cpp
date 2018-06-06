#include <bits/stdc++.h>

using namespace std;

int isDuplicate(int *arr,int size,int k){
	if(size==0)
		return 0;
	for(int i=0;i<size;i++){
		for(int j=i+1;(j<size)&&(j<=i+k);j++){
			if(arr[i]==arr[j])
				return 1;
		}
		for(int j=i-1;(j>=0)&&(j>=i-k);j--){
			if(arr[i]==arr[j])
				return 1;	
		}	
	}
	return 0;
}

int main(){
	int tc;
	cin>>tc;
	while(tc--){
		int N,K;
		cin>>N>>K;
		int *arr=new int[N];
		for(int i=0;i<N;i++)
			cin>>arr[i];
		cout<<isDuplicate(arr,N,K)<<endl;

	}



return 0;}