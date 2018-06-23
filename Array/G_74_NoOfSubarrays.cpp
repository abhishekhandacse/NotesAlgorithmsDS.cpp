#include <iostream>

using namespace std;


int NoOfSub(int *arr,int size,int l,int r){
	int count=0;
	int max=arr[0];
	for(int i=0;i<size;i++){
		max=arr[i];
		for(int j=i;j<size;j++){
			if(max<arr[j])
				max=arr[j];

			if(max>=l && max<=r)
				count++;
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
		int l,r;
		cin>>l>>r;
		for(int i=0;i<size;i++)
				cin>>arr[i];

		cout<<NoOfSub(arr,size,l,r)<<endl;
	}




return 0;}