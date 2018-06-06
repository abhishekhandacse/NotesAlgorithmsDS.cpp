#include <bits/stdc++.h>

using namespace std;

int maximum(int *arr,int size){
	int arrsum=0,rj=0;
	for(int i=0;i<size;i++){
		arrsum+=(arr[i]);
		rj+=(i*arr[i]);
	}

	int rjj;
	int max=arrsum;
	for(int j=1;j<size;j++){
		rjj=arrsum-( (size*arr[size-j]) )+rj;
		if(max<rjj)
			max=rjj;
		rj=rjj;
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
		int maxsum=INT_MIN,sum;
		for(int i=0;i<N;i++){
			sum=0;
			for(int j=0;j<N;j++){
				sum+=(((j)%N)*(arr[ ((j+i)%N) ])) ;

			}
			// cout<<sum<<" ";	
			if(maxsum<sum)
				maxsum=sum;
		}
		cout<<maxsum<<endl;
		cout<<maximum(arr,N);
	}


return 0;}