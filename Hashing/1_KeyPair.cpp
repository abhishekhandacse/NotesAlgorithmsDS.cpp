
// Optimised Geeks accepted solution

#include <bits/stdc++.h>

using namespace std;
#define MAX 2001
int ispossible(int *arr,int N,int sum){

	int *hash=(int*)calloc(MAX,sizeof(int));

	for(int i=0;i<N;i++){
		if(hash[arr[i]])
			return 1;

		int val=(sum-arr[i]);
		if(val>=1  ){
			hash[val]=1;
		}
	}
	return 0;
}

int main(){
	int tc;
	cin>>tc;
	while(tc--){
		int N,sum;
		cin>>N>>sum;
		int *arr=new int[N];
		for(int i=0;i<N;i++)
			cin>>arr[i];
		if(ispossible(arr,N,sum)){
			cout<<"Yes"<<endl;
		}else{
			cout<<"No"<<endl;
		}
	}


return 0;}