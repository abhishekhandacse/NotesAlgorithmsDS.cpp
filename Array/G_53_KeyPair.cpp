#include <bits/stdc++.h>

using namespace std;

string KeyPair(int *arr,int size,int sum){
	sort(arr,arr+size);
	for(int i=0;i<size;i++){
		if(binary_search(arr,arr+size,sum-arr[i])){
			return "Yes";
		}
	}
	return "No";
}

int main(){
	int tc;
	cin>>tc;


	while(tc--){
		int size,sum;
		cin>>size>>sum;
		int *arr=new int[size];
		for(int i=0;i<size;i++)
			cin>>arr[i];

		cout<<KeyPair(arr,size,sum)<<endl;

		
	}
return 0;}