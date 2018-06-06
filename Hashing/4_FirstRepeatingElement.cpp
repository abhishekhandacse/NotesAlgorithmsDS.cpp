#include <bits/stdc++.h>
#define MAX 10001
using namespace std;

int FirstRepeating(int *arr,int size){
	int hashmap[MAX]={0};

	for(int i=0;i<size;i++){
		hashmap[arr[i]]=hashmap[arr[i]]+1;
	}

	for(int i=0;i<size;i++){
		if( (hashmap[arr[i]]) > 1)
			return i+1;
	}
	return -1;
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

		cout<<FirstRepeating(arr,N)<<endl;
	}



return 0;}