#include <bits/stdc++.h>

using namespace std;

void reverse(int *arr,int lower,int upper){
	int temp;
	while(lower<upper){
		temp=arr[lower];
		arr[lower]=arr[upper];
		arr[upper]=temp;
		lower++;
		upper--;
	}

}
void rotate(int *arr,int d,int n){
	reverse(arr,0,d-1);
		// for(int i=0;i<n;i++)
		// 	cout<<arr[i]<<" ";
		// cout<<endl;
	reverse(arr,d,n-1);
		// for(int i=0;i<n;i++)
		// 		cout<<arr[i]<<" ";
		// cout<<endl;
	reverse(arr,0,n-1);
		// for(int i=0;i<n;i++)
		// 		cout<<arr[i]<<" ";
		// cout<<endl;
}


int main(){
	int tc;
	cin>>tc;
	while(tc--){
		int N,D;
		cin>>N;
		int *arr=new int[N];
		for(int i=0;i<N;i++)
			cin>>arr[i];
		cin>>D;
		rotate(arr,D,N);
		// reverse(arr,0,N-1);
		for(int i=0;i<N;i++)
			cout<<arr[i]<<" ";
		cout<<endl;
	}


return 0;}