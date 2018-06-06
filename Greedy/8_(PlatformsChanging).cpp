#include <bits/stdc++.h>
using namespace std;
// Time Linmit Exceded O(N)
// Space Complexity	   O(1)
// Not Optimised
int MinPlatforms(int *arr,int *dept,int size){
	if(size==0)
		return 0;

	int max_overlap=0,maximum=INT_MIN;
	for(int i=0;i<size;i++){
		max_overlap=0;
		for(int j=0;j<size;j++){
			if(i==j)
				continue;

			// if( ((arr[j] >= arr[i]) && (arr[j] <= dept[i])) || ( arr[i] >= arr[j]  ) && ( arr[i] <= dept[j] ) )
			// 	max_overlap++;
		if( ((arr[i] <= arr[j]) && (dept[i]>=arr[j])) || ((arr[i] <= dept[j]) && (dept[i]>=arr[j])) ){
				max_overlap++;
			}
		}
		if(maximum<max_overlap)
			maximum=max_overlap;
	}
	return maximum+1;
}

// Time Complexity= O(nlogn)
// Space Complexity=O(n)(due to merge sort)
int MinPlatformsOptimised(int *arr,int *dept,int size){
	if(size==0)
		return 0;
	sort(arr,arr+size);
	sort(dept,dept+size);

	int MinPlatforms=1,maximum=1;
	int i=1,j=0;
	while( (i<size) && (j<size)  ){
		if(arr[i]<dept[j]){
			MinPlatforms++;
			i++;
			if(MinPlatforms > maximum){
				maximum=MinPlatforms;
			}
		}else{
			MinPlatforms--;
			j++;
		}
	}
	return maximum;
}

int main(){
	int tc;
	cin>>tc;
	while(tc--){
		int N,temp;
		cin>>N;
		int *arr=(int *)calloc(N,sizeof(int));
		int *dept=(int *)calloc(N,sizeof(int));
		for(int i=0;i<N;i++){
			cin>>arr[i];

		}
		for(int i=0;i<N;i++){
			cin>>dept[i];
		}
		for(int i=0;i<N;i++){
			if(arr[i]>dept[i]){
				dept[i]+=2400;//Signifying next day
			}
		}
		// cout<<MinPlatforms(arr,dept,N)<<endl;
		cout<<MinPlatformsOptimised(arr,dept,N)<<endl;
	}


return 0;}