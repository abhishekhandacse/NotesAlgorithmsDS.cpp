#include <bits/stdc++.h>

using namespace std;


int LCS(int *arr,int size){
	sort(arr,arr+size);
	int counter=1;
	int max=INT_MIN;
	for(int i=1;i<size;i++){
		if( (arr[i]-arr[i-1])==1){
			counter++;
			if(max<counter)
				max=counter;
		}else{
			counter=1;
		}
	}
	return max;
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

		cout<<LCS(arr,N)<<endl;
	}



return 0;}