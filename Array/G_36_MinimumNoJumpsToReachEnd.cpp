#include <bits/stdc++.h>

using namespace std;

int MinJumps(int *arr,int low,int high){
	if(low==high)
		return 0;

	if(arr[low]==0)return -1;

	int min=INT_MAX;

	// int min=INT_MAX;

	for(int i=low+1;(i<=high) && i<=low+arr[low];i++ ){
		int jumps=MinJumps(arr,i,high);
		if(jumps!=-1  &&  jumps +1<min)
			min=jumps+1;
	}
	return min;
	
}

int MinJumpsDP(int *arr,int n){
	int *jumps=new int[n];
	int i,j;
	if(n==0 || arr[0]==0)
		return -1;
	jumps[0]=0;
	for(i=1;i<n;i++){
		jumps[i]=INT_MAX;
		for(j=0;j<i;j++){
			if(i<=j+arr[j]  &&  jumps[j]!=INT_MAX){
				jumps[i]=min(jumps[i],jumps[j]+1);
				// break;
			}
		}
	}
	return jumps[n-1];
}

int main(){
	int tc;
	cin>>tc;


	while(tc--){
		int size;
		cin>>size;
		int *arr=new int[size];
		for(int i=0;i<size;i++)
			cin>>arr[i];

		int ans=MinJumpsDP(arr,size);
		if(ans==INT_MAX)
			cout<<-1<<endl;
		else cout<<ans<<endl;
		
	}
return 0;}