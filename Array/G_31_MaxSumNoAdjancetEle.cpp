#include <bits/stdc++.h>

using namespace std;

int maximum(int *arr,int size){
	int incl=arr[0];
	int excl=0;

	int excl_copy;
	for(int i=1;i<size;i++){
		excl_copy=excl;
		excl=max(incl,excl);
		incl=excl_copy+arr[i];
	}

	return max(incl,excl);
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
		
		cout<<maximum(arr,N)<<endl;
	}


return 0;}