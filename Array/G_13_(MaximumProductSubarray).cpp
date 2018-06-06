#include <bits/stdc++.h>
typedef long long int lint;
using namespace std;

lint LongestSubarrayProduct(int *arr,int n){
	lint maxlen=1;
	for(int i=0;i<(n-1);i++){
		lint prod=1;
		for(int j=i;j<n;j++){
			prod*=arr[j];
			if(maxlen<prod)
				maxlen=prod;
		}

	}
	return maxlen;
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

	cout<<LongestSubarrayProduct(arr,N)<<endl;
	delete arr;
}



return 0;}