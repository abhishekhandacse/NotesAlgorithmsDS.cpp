#include<bits/stdc++.h>

using namespace std;



int main(){
	int tc;
	cin>>tc;
	while(tc--){
		int N,K;
		cin>>N>>K;
		K=(K%N);
		int *arr=new int[2*N];
		for(int i=0;i<N;i++){
			cin>>arr[i];
			arr[i+N]=arr[i];
		}
		for(int i=(N-K);i<(N-K+N);i++){
			cout<<arr[i]<<" ";
		}
		cout<<endl;
		delete arr;
	}
	

return 0;}