#include<bits/stdc++.h>

using namespace std;

int main(){


	int n;
	cin>>n;
	int *arr=new int[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];


	sort(arr,arr+n);

	int min_coins=0;
	int start=arr[0];
	for(int i=0;i<n;i++,start++){
		min_coins+=abs(start-arr[i]);
	}

	cout<<min_coins<<endl;


return 0;}

// Time Complexity O(nlogn)

// Bottleneck sorting