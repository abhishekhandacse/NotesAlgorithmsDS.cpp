#include <bits/stdc++.h>

using namespace std;

int LongestSubarray(int *arr,int n){
	int maxlen=INT_MIN;
	for(int i=0;i<(n-1);i++){
		int count_0=0,count_1=0,len=0;
		for(int j=i;j<n;j++){
			if(arr[j]==0)
				count_0++;
			else
				count_1++;

			if(count_0==count_1){
				len=j-i+1;
				if(maxlen<len)
					maxlen=len;
			}
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

	cout<<LongestSubarray(arr,N)<<endl;
	delete arr;
}



return 0;}