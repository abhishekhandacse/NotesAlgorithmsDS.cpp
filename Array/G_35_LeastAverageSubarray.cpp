#include <bits/stdc++.h>

using namespace std;

void LeastAverage(int *arr,int size,int k, int &start){

	int ls=INT_MAX,sum=0;

	for(int i=0;i<k;i++){
		sum+=arr[i];
		ls=min(ls,sum);
	}
	for(int i=k;i<=(size-k);i++){
		sum-=arr[i-k];
		sum+=arr[i];
		if(ls>sum){
			ls=sum;
			start=(i-k+1);
		}
	}
	start++;


}



int main(){
	int tc;
	cin>>tc;


	while(tc--){
		int size,k;
		cin>>size>>k;
		int *arr=new int[size];
		for(int i=0;i<size;i++)
			cin>>arr[i];

		int start=0;
		LeastAverage(arr,size,k,start);
		cout<<start<<" "<<(start+k-1)<<endl;
		
	}
return 0;}