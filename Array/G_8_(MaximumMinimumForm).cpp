#include <bits/stdc++.h>

using namespace std;

int main(){
	int tc;
	cin>>tc;
	while(tc--){
		int N;
		cin>>N;
		int *arr=new int[N];
		
		for(int i=0;i<N;i++)
			cin>>arr[i];

		sort(arr,arr+N);

		int start=0,end=N-1;

		while(start<=end){
			if(start==end){
				cout<<arr[start]<<" ";
			}else{
				cout<<arr[end]<<" "<<arr[start]<<" ";
			}
			start++;
			end--;
		}
		cout<<endl;

	}
return 0;}