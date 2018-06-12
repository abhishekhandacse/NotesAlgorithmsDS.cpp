#include <bits/stdc++.h>

using namespace std;

int LongestSpanSameSum(int *arr1,int *arr2,int size){
	int max=0;
	for(int i=0;i<size;i++){
		int sum1=0,sum2=0;
		for(int j=i;j<size;j++){
			sum1+=arr1[j];
			sum2+=arr2[j];

			// cout<<sum1<<" "<<sum2<<endl;
			if( (sum1==sum2) && max<(j-i+1))
				max=j-i+1;

		}
	}
	return max;
}

int main(){
	int tc;
	cin>>tc;


	while(tc--){
		int size;
		cin>>size;
		int *arr1=new int[size];
		int *arr2=new int[size];
		for(int i=0;i<size;i++)
			cin>>arr1[i];
		for(int i=0;i<size;i++)
			cin>>arr2[i];

		cout<<LongestSpanSameSum(arr1,arr2,size)<<endl;

		
	}
return 0;}