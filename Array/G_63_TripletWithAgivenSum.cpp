#include <bits/stdc++.h>

using namespace std;
// Finds 2 Non Repeating elements in the array
int Triplet(int *arr,int size,int sum){
	sort(arr,arr+size);
	for(int i=0;i<size;i++){
		int left=0,right=size-1;
		int target=sum-arr[i];

		while(left<right){
			if(left==i ){
				left++;continue;
			}
			if(right==i){
				right--;continue;
			}
			if((arr[left]+arr[right])==target)
				return 1;
			else if((arr[left]+arr[right])>target)
				right--;
			else
				left++;
		}

	
	}
	return 0;
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
		sort(arr,arr+size);
		cout<<Triplet(arr,size,sum)<<endl;

		
	}
return 0;}