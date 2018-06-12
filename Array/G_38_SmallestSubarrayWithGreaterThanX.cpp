#include <bits/stdc++.h>

using namespace std;

int MaxSumSequence(int *arr,int size,int k){
	int min_len=INT_MAX;
	for(int i=0;i<size;i++){
		int sum=0;
		for(int j=i;j<size;j++){
			sum+=arr[j];
			if(sum>k  &&  ((j-i+1)<min_len )){
				min_len=j-i+1;
			}
		}
	}
	return min_len;
}

int main(){
	int tc;
	cin>>tc;


	while(tc--){
		int size,k;
		cin>>size>>k;
		int *arr=new int[size];
		for(int i=0;i<size;i++)
			cin>>arr[i];

		cout<<MaxSumSequence(arr,size,k)<<endl;

		
	}
return 0;}