#include <bits/stdc++.h>

using namespace std;

int maxarea(int *arr,int size){
	if(size==0)
		return 0;
	int area=INT_MIN;
	for(int i=0;i<size;i++){
		for(int j=i;j<size;j++){
			int min=INT_MAX;
			for(int k=i;k<=j;k++){
				if(min>arr[k])
					min=arr[k];
			}

			if(area < ((j-i+1)*min) )
				area=((j-i+1)*min);
		}
	}
	return area;
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

		cout<<maxarea(arr,N)<<endl;
	}



return 0;}