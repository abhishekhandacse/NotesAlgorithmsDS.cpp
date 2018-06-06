#include <bits/stdc++.h>

using namespace std;

void firstnegative(int *arr,int n,int k){
	queue<int> q;

	for(int i=0;i<k;i++)
		if(arr[i]<0)
			q.push(i);

	for(int i=k;i<=n;i++){
		
		while( !q.empty() &&  q.front() < (i-k) )
			q.pop();

		if(q.empty()){
			cout<<0<<" ";
		}else{
			cout<<arr[q.front()]<<" ";
		}
	
		if(i<n && arr[i]<0)
		    q.push(i);
	}

	
	cout<<endl;

}

int main(){
	int tc;
	cin>>tc;
	while(tc--){
		int n,k;
		cin>>n;

		int *arr=new int[n];

		for(int i=0;i<n;i++)
			cin>>arr[i];

		cin>>k;

		firstnegative(arr,n,k);

	}

return 0;}