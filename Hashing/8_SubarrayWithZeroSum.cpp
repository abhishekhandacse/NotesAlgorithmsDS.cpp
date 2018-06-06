#include <bits/stdc++.h>

using namespace std;

int Subarray0sum(int *arr,int n){

	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			int sum=0;
			for(int k=i;k<=j;k++){
				sum+=arr[k];
				if(sum==0)
					return 1;
			}
		}
	}
	return 0;
}
int Subarray0sumOpt(int *arr,int n){
	set<int> prevsum;
	int sum=0;
	for(int i=0;i<n;i++){
		sum+=arr[i];
		if(sum==0 || prevsum.find(sum)!=prevsum.end())
			return 1;

		prevsum.insert(sum);
	}
	return 0;
}

int main(){
	int tc;
	cin>>tc;
	while(tc--){
		int N;
		cin>>N;
		int *arr=new int[N];
		
		for(int i=0;i<N;i++)
			cin>>arr[i];

		cout<<Subarray0sum(arr,N)<<endl;
		cout<<Subarray0sumOpt(arr,N)<<endl;
	}



return 0;}