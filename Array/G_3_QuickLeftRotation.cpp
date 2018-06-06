
#include <bits/stdc++.h>

using namespace std;

int main(){
	int tc;
	cin>>tc;
	while(tc--){
		int N,D;
		cin>>N>>D;
		int *arr=new int[N];
		for(int i=0;i<N;i++)
			cin>>arr[i];
		D=(D%N);
		while(D--){
			int temp1;
			temp1=arr[0];
			for(int i=0;i<(N-1);i++){
				arr[i]=arr[i+1];
			}
			arr[N-1]=temp1;
		}

		for(int i=0;i<N;i++)
			cout<<arr[i]<<" ";
		cout<<endl;
	}
return 0;}