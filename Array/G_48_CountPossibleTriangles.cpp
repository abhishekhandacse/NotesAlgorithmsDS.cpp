#include <bits/stdc++.h>

using namespace std;

int counttri(int *arr,int size){
	int ans=0;
	for(int i=0;i<size-2;i++){
		for(int j=i+1;j<size-1;j++){
			for(int k=j+1;k<size;k++){
				if( ((arr[i]+arr[j]) >arr[k]) && ((arr[j]+arr[k]) >arr[i]) && ((arr[i]+arr[k]) > arr[j]) )
					ans++;
			}
		}
	}

	return ans;
}
int counttriOpt(int *arr,int size){
	sort(arr,arr+size);
	int count=0;
	for(int i=0;i<(size-2);i++){
		int k=i+2;
		for(int j=i+1;j<size;j++){
			while(k<size  &&  arr[i]+arr[j]>arr[k])
				k++;

			count+=k-j-1;
		}
	}
	return count;

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

		cout<<counttri(arr,size)<<endl;
		cout<<counttriOpt(arr,size)<<endl;
		
	}
return 0;}