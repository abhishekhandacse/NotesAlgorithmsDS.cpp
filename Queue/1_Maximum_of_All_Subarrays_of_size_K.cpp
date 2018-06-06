#include <bits/stdc++.h>

using namespace std;


void maxofwink(int *arr,int size,int K){
	priority_queue<int> pq;
	for(int i=0;i<K;i++)
		pq.push(arr[i]);

	for(int i=K;i<size;i++){
		cout<<pq.top()<<" ";
		pq.remove(arr[i-K]);
		pq.push(arr[i]);
	}
	cout<<endl;
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

		maxofwink(arr,N,K);
		if(K>N)
			K=N;
		int max=arr[0];
		for(int i=0;i<N-K+1;i++){
			max=arr[i];
			for(int j=i;j<(i+K);j++){
				if(max<arr[j])
					max=arr[j];
			}
			cout<<max<<" ";
		}
		cout<<endl;
	}
return 0;}