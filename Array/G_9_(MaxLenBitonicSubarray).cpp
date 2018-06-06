#include <bits/stdc++.h>

using namespace std;

void print(int *arr,int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

int Bitonic(int *arr,int n){
	int inc[n];
	int dec[n];
	inc[0]=1;
	dec[n-1]=1;

	for(int i=0;i<(n-1);i++){
		if(arr[i+1]>=arr[i]){//Strictly increasing 
			inc[i+1]=inc[i]+1;
		}else{
			inc[i+1]=1;
		}
	}
	// print(inc,n);
	for(int i=n-1;i>0;i--){
		if(arr[i-1]>=arr[i])//Strictly decreasing
			dec[i-1]=dec[i]+1;
		else
			dec[i-1]=1;
	}
	// print(dec,n);
	int max=INT_MIN;
	for(int i=0;i<n;i++){
		if(max<(inc[i]+dec[i]-1))
			max=(inc[i]+dec[i]-1);
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
		cout<<Bitonic(arr,N)<<endl;	
	}
return 0;}