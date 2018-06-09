#include <bits/stdc++.h>

using namespace std;

void KLargest(int *arr,int size,int k){

	sort(arr,arr+size,greater<int>());

	for(int i=0;i<k;i++)
		cout<<arr[i]<<" ";

	cout<<endl;
}

int main(){
	int tc;
	cin>>tc;
	while(tc--){
		int N,k;
		cin>>N>>k;
		int *arr=new int[N];
		for(int i=0;i<N;i++)
			cin>>arr[i];

		KLargest(arr,N,k);
	}


return 0;}