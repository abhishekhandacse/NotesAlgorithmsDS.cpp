#include <bits/stdc++.h>

using namespace std;

//Method 1 O(nlogn)
int KSmallest(int *arr,int size,int k){
	sort(arr,arr+size);

	return arr[k-1];
}
//Method 2 O(k+(n-k)log(k))
int KSmallestHeap(int *arr,int size,int k){
	priority_queue<int> pq;
	for(int i=0;i<k;i++)
		pq.push(arr[i]);

	for(int i=k;i<size;i++){
		int x=pq.top();
		if(arr[i]<x){
			pq.pop();
			pq.push(arr[i]);
		}
	}
	return pq.top();
}

int main(){

	int tc;
	cin>>tc;
	while(tc--){
		int size,k;
		cin>>size;
		int *arr=new int[size];
		for(int i=0;i<size;i++)
			cin>>arr[i];

		cin>>k;

		// cout<<KSmallest(arr,size,k)<<endl;
		cout<<KSmallestHeap(arr,size,k)<<endl;
	}


return 0;}