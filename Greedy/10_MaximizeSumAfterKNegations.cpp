#include <bits/stdc++.h>

using namespace std;

int MaximizeK(int *arr,int size,int K){
	while(K--){
		int min=INT_MAX,index;
		for(int i=0;i<size;i++){
			if(arr[i] < min ){
				min=arr[i];
				index=i;
			}
		}
		arr[index]=(-arr[index]);
	}
	int sum=0;
	for(int i=0;i<size;i++)
		sum+=(arr[i]);
	return sum;
}

int MaximizePriorityQueue(int *arr,int size,int K){
	priority_queue<int,vector<int>,greater<int>> pq(arr,arr+size);//Min Heap
	while(K--){
		int top=pq.top();
		pq.pop();
		top=-top;
		pq.push(top);
	}
	// Now return sum of priority queue
	int sum=0;
	while( pq.size() !=0 ){
		sum+=pq.top();
		pq.pop();
	}
return sum;
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
	int K;
	cin>>K;
	cout<<MaximizeK(arr,N,K)<<endl;
	cout<<MaximizePriorityQueue(arr,N,K)<<endl;	
}

return 0;}