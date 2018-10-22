#include<bits/stdc++.h>
using namespace std;

int maxtrappedwater(int *arr,int N){
	if(N<3)
		return 0;
	vector<int> prev(N-2,0);
	vector<int> next(N-2,0);
	int maxprev=arr[0];
	int maxnext=arr[N-1];
	for(int i=1;i<N-1;i++){
		prev[i-1]=maxprev;
		maxprev=max(maxprev,arr[i]);
	}
	for(int i=N-2;i>=1;i--){
		next[i-1]=maxnext;
		maxnext=max(maxnext,arr[i]);
	}
	// Main Trapping of water in each bar of width 1
	// Leave first and last bar as no trapping possible there
	int water=0;
	for(int i=1;i<N-1;i++){
		if(arr[i]<prev[i-1] && arr[i]<next[i-1]){
			water+=min(prev[i-1]-arr[i],next[i-1]-arr[i]);
		}
	}
	return water;
}

int main(){
int tc;
cin>>tc;
while(tc--){
	int size;
	cin>>size;
	int arr[size];
	for(int i=0;i<size;i++)
		cin>>arr[i];
	cout<<maxtrappedwater(arr,size)<<endl;
}



return 0;}