#include <bits/stdc++.h>

using namespace std;


void MaxOfMin(int *arr,int N){
	for(int window=1;window<=N;window++){
		int max=INT_MIN;
		for(int i=0;i<=(N-window);i++){
			int min=INT_MAX;
			for(int k=i;k<(i+window);k++){
				if(min>arr[k])
					min=arr[k];
			}
			if(max<min)
				max=min;
		}
		cout<<max<<" ";
	}
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
		MaxOfMin(arr,N);

	}


return 0;}