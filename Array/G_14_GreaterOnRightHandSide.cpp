#include <bits/stdc++.h>

using namespace std;

void GreaterOnRHS(int *arr,int N){
	int maxright=-1,temp;
	for(int i=N-1;i>=0;i--){
		temp=arr[i];
		arr[i]=maxright;
		if(maxright<temp)
			maxright=temp;
	}
	for(int i=0;i<N;i++)
		cout<<arr[i]<<" ";
	cout<<endl;
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

		GreaterOnRHS(arr,N);
	}

return 0;}